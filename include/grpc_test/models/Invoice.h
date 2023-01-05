#ifndef INVOICE_H
#define INVOICE_H

#include <cstdint>
#include <string>
#include <queue>
#include <chrono>

#include "grpc_test/models/Client.h"

namespace gRPCTest::Core::Models
{
  struct Invoice
  {
    std::uint64_t id;
    std::string name;
    std::string address;
    Client client;
    std::chrono::time_point<std::chrono::system_clock> created_at;
  };
}

#endif /* INVOICE_H */
