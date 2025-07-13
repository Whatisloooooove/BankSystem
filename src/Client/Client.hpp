#pragma once

#include <iostream>
#include <memory>
#include <src/Account.hpp>
#include <string>
#include <unordered_map>

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

  std::string GetAddress() const;

  std::string GetPassport() const;

  bool IsFullClient() { return address_.has_value() && passport_.has_value(); }

  bool IsBanned() { return is_banned; }

  std::shared_ptr<Account> CreateAccount(double amount);

  std::shared_ptr<Account> GetAccountById(uint64_t id);

  auto GetAllAccounts() -> std::unordered_map<uint64_t, std::shared_ptr<Account>;
 
 private:
  std::string first_name_;
  std::string last_name_;
  std::optional<std::string> address_;
  std::optional<std::string> passport_;
  std::unordered_map<uint64_t, std::shared_ptr<Account>> accounts_;
  bool is_banned;
};