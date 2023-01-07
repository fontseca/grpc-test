#ifndef INVOICE_DETAILS_H
#define INVOICE_DETAILS_H

#include <cstdint>

#include "grpc_test/models/Product.h"

namespace gRPCTest::Core::Models
{
  struct InvoiceDetails
  {
    Product product;
    double discount;
    std::int32_t amount;
    double total;
  };
}

namespace gRPCTest::Core
{
  template <typename T>
  class RepositoryTraits;

  template <>
  class RepositoryTraits<Models::InvoiceDetails>
  {
  public:
    static constexpr auto RepositoryName() noexcept
      -> const char *
    {
      return "InvoiceDetails";
    }
  };
}

#endif /* INVOICE_DETAILS_H */
