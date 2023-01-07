#ifndef DATABASE_H
#define DATABASE_H

#include <string_view>
#include <list>
#include <memory>
#include <optional>

#include "grpc_test/Table.h"

namespace gRPCTest::Core
{
  class Database
  {
  public:
    template <typename T>
    void RegisterTable(const std::string_view table_name) noexcept
    {
      auto table = std::make_unique<::gRPCTest::Core::Table<T>>(table_name);
      m_tables.push_back(std::move(table));
    }

    template <typename T>
    [[nodiscard]] auto Table(const std::string_view table_name) noexcept
      -> std::optional<Table<T> *>
    {
      for (auto &table : m_tables)
      {
        if (table_name == table->Name())
        {
          return dynamic_cast<::gRPCTest::Core::Table<T> *>(table.get());
        }
      }

      return std::nullopt;
    }

    [[nodiscard]] auto Count(const std::string_view table_name) noexcept
      -> std::size_t
    {
      for (const auto &table : m_tables)
      {
        if (table_name == table->Name())
        {
          return table->Count();
        }
      }

      return 0;
    }

    template <typename T>
    [[nodiscard]] auto SelectFromTable(const std::string_view table_name) noexcept
      -> const std::list<T> &
    {
      return Table<T>(table_name).value()->Select();
    }

  private:
    std::list<std::unique_ptr<gRPCTest::Core::ITable>> m_tables;
  };
}

#endif /* DATABASE_H */
