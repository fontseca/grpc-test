#ifndef INVOICE_H
#define INVOICE_H

#include <cstdint>
#include <string>
#include <queue>
#include <chrono>

namespace gRPCTest::Core::Models
{
  struct Invoice
  {
    std::uint64_t id;
    std::uint64_t client_id;
    std::string name;
    std::string address;
    std::chrono::time_point<std::chrono::system_clock> created_at;
  };
}

namespace gRPCTest::Core
{
  template <typename T>
  class RepositoryTraits;

  template <>
  class RepositoryTraits<Models::Invoice>
  {
  public:
    static constexpr const char *RepositoryName = "Invoice";
  };
}

#endif /* INVOICE_H */
