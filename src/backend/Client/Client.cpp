#include "Client.hpp"

Client::Client() = default;
Client::Client(std::string first_name, std::string last_name)
    : first_name_(first_name), last_name_(last_name) {}

Client::Client(std::string first_name, std::string last_name,
               std::string address, std::string passport)
    : first_name_(first_name),
      last_name_(last_name),
      address_(address),
      passport_(passport) {}

Client Client::operator=(const Client& other) {
  address_ = other.address_;
  first_name_ = other.first_name_;
  last_name_ = other.last_name_;
  passport_ = other.passport_;
  return *this;
}

bool Client::operator==(const Client& other) const {
  return (
      address_ == other.GetAddress() && first_name_ == other.GetFirstName() &&
      last_name_ == other.GetLastName() && passport_ == other.GetPassport());
}

std::string Client::GetFirstName() const { return first_name_; }

std::string Client::GetLastName() const { return last_name_; }

std::optional<std::string> Client::GetAddress() const { return address_; }

std::optional<std::string> Client::GetPassport() const { return passport_; }

std::shared_ptr<Account> Client::CreateDebitAccount(double amount) {
  std::shared_ptr<Account> acc = std::make_shared<DebitAccount>(amount);
  accounts_[acc->GetId()] = acc;
  return acc;
}

std::shared_ptr<Account> Client::CreateCreditAccount(double amount) {
  std::shared_ptr<Account> acc = std::make_shared<CreditAccount>(amount);
  accounts_[acc->GetId()] = acc;
  return acc;
}

std::shared_ptr<Account> Client::CreateDepositAccount(double amount, time_t time) {
  std::shared_ptr<Account> acc = std::make_shared<DepositAccount>(amount, time);
  accounts_[acc->GetId()] = acc;
  return acc;
}


std::optional<std::shared_ptr<Account>> Client::GetAccountById(uint64_t id) {
  if (accounts_.find(id) != accounts_.end()) {
    return accounts_[id];
  }
  return std::nullopt;
}

const std::unordered_map<uint64_t, std::shared_ptr<Account>>& Client::GetAllAccounts()
    const {
  return accounts_;
}
