#pragma once

#include <iostream>
#include <memory>
#include <optional>
#include <string>
#include <unordered_map>

#include "../Account/CreditAccount.hpp"
#include "../Account/DebitAccount.hpp"
#include "../Account/DepositAccount.hpp"

class Client {
 public:
  Client();
  Client(std::string first_name, std::string last_name);
  Client(std::string first_name, std::string last_name, std::string address,
         std::string passport);

  Client operator=(const Client& other);

  bool operator==(const Client& other) const;

  std::string GetFirstName() const;
  std::string GetLastName() const;
  std::optional<std::string> GetAddress() const;
  std::optional<std::string> GetPassport() const;

  bool IsFullClient() { return address_.has_value() && passport_.has_value(); }
  bool IsBanned() { return is_banned; }

  std::shared_ptr<Account> CreateDebitAccount(double amount);
  std::shared_ptr<Account> CreateCreditAccount(double amount);
  std::shared_ptr<Account> CreateDepositAccount(double amount, time_t time);

  std::optional<std::shared_ptr<Account>> GetAccountById(uint64_t id);
  const std::unordered_map<uint64_t, std::shared_ptr<Account>>& GetAllAccounts() const;

 private:
  std::string first_name_;
  std::string last_name_;
  std::optional<std::string> address_;
  std::optional<std::string> passport_;

  std::unordered_map<uint64_t, std::shared_ptr<Account>> accounts_;
  bool is_banned;
};