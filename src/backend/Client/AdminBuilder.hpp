#include "ClientBuilder.hpp"
#include "Admin.hpp"

class AdminBuilder : public ClientBuilder {
 public:
  std::unique_ptr<Admin> CreateAccount() {
    auto client = ClientBuilder::CreateAccount();
    return std::make_unique<Admin>(client->GetFirstName(), client->GetLastName());
  }
};