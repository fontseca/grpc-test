#ifndef DATABASE_H
#define DATABASE_H

#include <list>
#include <memory>
#include <algorithm>

#include "grpc_test/Repository.h"

namespace gRPCTest::Core
{
  class Database
  {
  public:
    /* Adds a new repository to the database.  */
    template <typename T>
    void RegisterRepository() noexcept
    {
      m_repositories.push_back(MakeRepository<T>());
    }

    /* Gets a reference to the `T' repository.  */
    template <typename T>
    [[nodiscard]]
    auto Repository() noexcept
      -> std::shared_ptr<::gRPCTest::Core::Repository<T>>
    {
      const auto result = std::find_if(
        std::cbegin(m_repositories),
          std::cend(m_repositories),
            [](const decltype(m_repositories)::value_type &repository)
            {
              return repository->Name()
                == ::gRPCTest::Core::Repository<T>::RepositoryName;
            });

      return result == m_repositories.cend()
        ? std::dynamic_pointer_cast<::gRPCTest::Core::Repository<T>>(*result)
          : nullptr;
    }
  private:
    std::list<std::shared_ptr<IRepository>> m_repositories;
  };
}

#endif /* DATABASE_H */
