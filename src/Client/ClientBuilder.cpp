#include <ClientBuilder.hpp>

#include <iostream>
#include <string>

std::shared_ptr<Client> ClientBuilder::CreateAccount() {
  if (passport_.has_value() && address_.has_value()) {
    return std::make_shared<Client>(first_name_, last_name_, address_,
                                    passport_);
  } else {
    return std::make_shared<Client>(first_name_, last_name_);
  }
}
