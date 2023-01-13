#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include <cstdint>

namespace gRPCTest::Core
{
  namespace Models
  {
    struct Client
    {
      std::uint64_t id;
      std::string name;
      std::string phone;
      std::string email;
    };
  }

  template <typename T>
  class RepositoryTraits;

  template <>
  class RepositoryTraits<Models::Client>
  {
  public:
    static constexpr const char *RepositoryName = "Client";
  };
}

#endif /* CLIENT_H */
