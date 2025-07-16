#include "ClientBuilder.hpp"

std::shared_ptr<Client> ClientBuilder::CreateAccount() {
  if (passport_.has_value() && address_.has_value()) {
    return std::make_shared<Client>(first_name_, last_name_, address_.value(),
                                    passport_.value());
  } else {
    return std::make_shared<Client>(first_name_, last_name_);
  }
}
