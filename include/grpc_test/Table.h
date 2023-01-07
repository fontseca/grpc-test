#ifndef TABLE_H
#define TABLE_H

#include <string>
#include <list>

namespace gRPCTest::Core
{
  class ITable
  {
  public:
    virtual auto Name() const noexcept -> const std::string & = 0;
    virtual auto Count() const noexcept -> std::size_t = 0;
  };

  template <typename T>
  class Table : public ITable
  {
  public:
    explicit Table(const std::string_view name) noexcept
      : m_table_name { name }
    { }

    [[nodiscard]] const std::string & Name() const noexcept override
    {
      return m_table_name;
    }
  
    void Insert(T &record) noexcept
    {
      m_records.push_back(std::move(record)); 
    }

    [[nodiscard]] const std::list<T> & Select() noexcept
    {
      return m_records;
    }

    [[nodiscard]] std::size_t Count() const noexcept override
    {
      return m_records.size();
    }

  private:
    std::string m_table_name;
    std::list<T> m_records;
  };
}

#endif /* TABLE_H */
