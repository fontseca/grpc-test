#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include <cstdint>

namespace gRPCTest::Core::Models
{
  struct Client
  {
    std::uint64_t id;
    std::string name;
    std::string phone;
    std::string email;
  };
}

#endif /* CLIENT_H */
