#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <cstdint>

namespace gRPCTest::Core::Models
{
  struct Product
  {
    std::uint64_t id;
    std::string name;
    double price;
  };
}

#endif /* PRODUCT_H */
