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

namespace gRPCTest::Core
{
  template <typename T>
  class RepositoryTraits;

  template <>
  class RepositoryTraits<Models::Product>
  {
  public:
    static constexpr const char *RepositoryName = "Product";
  };
}


#endif /* PRODUCT_H */
