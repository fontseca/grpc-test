#ifndef REPOSITORY_H
#define REPOSITORY_H

#include <string>
#include <string_view>
#include <list>
#include <memory>
#include <optional>

namespace gRPCTest::Core
{
  class IRepository
  {
  public:
    virtual auto Name() const noexcept -> const std::string & = 0;
  };

  template <typename T>
  class RepositoryTraits;

  template <typename T,
            typename TypeTratis = RepositoryTraits<T>>
  class Repository final : public IRepository
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

  public:
    explicit Repository(const std::string_view name) noexcept
      : m_repository_name { name }
    { }

    /* The static name of the repository.  */
    static constexpr const char *RepositoryName = traits::RepositoryName;

    /* Gets the name of the repository from an instance.  */
    [[nodiscard]]
    const std::string &Name() const noexcept override
    {
      return m_repository_name;
    }
  
  public:
    /* Inserts a new record into the current repository.  */
    void InsertOne(reference record) noexcept
    {
      m_records.emplace_back(record);
    }
  
    /* Inserts an r-value of a new record into the
       current repository.  */
    void InsertOne(value_type &&record) noexcept
    {
      m_records.emplace_back(std::move(record));
    }

    /* Inserts several records at once.  */
    void InsertMany(const std::list<value_type> &records) noexcept
    {
      std::move(std::begin(records), std::end(records), std::back_inserter(m_records));
    }

    /* Inserts several records at once.  */
    void InsertMany(std::list<value_type> &&records) noexcept
    {
      std::move(std::begin(records), std::end(records), std::back_inserter(m_records));
    }

    /* Selects all the records from the current repository.  */
    [[nodiscard]]
    inline auto SelectAll() const noexcept
      -> const std::list<value_type> &
    {
      return m_records;
    }

    /* Selects all the records that match the criteria given by the
       predicate `predicate'.  If there are no matches, returns an
       empty list of records. */
    [[nodiscard]]
    auto SelectWhere(
      const std::function<bool (const_reference)> predicate) const noexcept
      -> std::list<value_type>
    {
      decltype(m_records) result;
      std::copy_if(std::cbegin(m_records),
        std::cend(m_records), std::back_inserter(result), predicate);
      return result;
    }

  public:
    /* Tries to find a record based on the predicate `predicate'.
       Returns `std::nullopt' in case of zero match.  */
    [[nodiscard]]
    auto Find(const std::function<bool (const_reference)> predicate)
      -> std::optional<value_type>
    {
      auto result = std::find_if(std::cbegin(m_records), std::cend(m_records), predicate);
      return result == m_records.end() ? std::nullopt : std::make_optional(*result);
    }

    /* Checks whether repository is empty or not.  */
    [[nodiscard]]
    inline auto Empty() const noexcept
      -> std::size_t
    {
      return m_count == 0;
    }

    /* The number of records in data store.  */
    [[nodiscard]]
    auto Size() const noexcept
      -> std::size_t
    {
      return m_count;
    }

  private:
    /* The name of the repository.  */
    std::string m_repository_name;

    /* The count of the records.  */
    std::size_t m_count;

    /* The actual records store.  */
    std::list<value_type> m_records;
  };

  /* Makes a new repository for the records of type `T'.  */
  template <typename T>
  [[nodiscard]] static constexpr inline auto MakeRepository() noexcept
  {
    return std::make_shared<Repository<T>>(Repository<T>::RepositoryName);
  }
}

#endif /* REPOSITORY_H */
