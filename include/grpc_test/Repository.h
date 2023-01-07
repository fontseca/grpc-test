#ifndef REPOSITORY_H
#define REPOSITORY_H

#include <iterator>
#include <string>
#include <string_view>
#include <functional>
#include <optional>

#include "grpc_test/Database.h"

namespace gRPCTest::Core
{
  template <typename T>
  class RepositoryTraits;

  template <typename T,
            typename TypeTratis = RepositoryTraits<T>>
  class Repository
  {
  public:
    /* using iterator_category = std::bidirectional_iterator;  */
    /* using difference_type = std::ptrdiff_t;  */
    using value_type = T;
    using pointer = value_type *;
    using const_pointer = const value_type *;
    using reference = value_type &;
    using const_reference = const value_type &;
    using traits = TypeTratis;

    explicit Repository(Database &database) noexcept
      : m_database { database }
    { }

    auto Insert(reference record) noexcept
      -> bool
    {
      auto table = m_database.Table<value_type>(traits::RepositoryName());

      if (table.has_value())
      {
        table.value()->Insert(record);
        return true;
      }

      return false;
    }

    [[nodiscard]] auto Select() noexcept
      -> const std::list<value_type> &
    {
      return m_database.SelectFromTable<value_type>(traits::RepositoryName());
    }

    [[nodiscard]] auto Count() noexcept
      -> std::size_t
    {
      return m_database.Count(traits::RepositoryName());
    }

    [[nodiscard]] auto SelectWhere(std::function<bool (const_reference)> predicate)
      -> std::optional<value_type>
    {
      for (auto &record : Select())
      {
        if (predicate(record))
        {
          return record;
        }
      }

      return std::nullopt;
    }

  private:
    gRPCTest::Core::Database &m_database;
  };
}

#endif /* REPOSITORY_H */
