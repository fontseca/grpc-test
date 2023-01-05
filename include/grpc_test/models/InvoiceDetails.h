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

#endif /* INVOICE_DETAILS_H */
