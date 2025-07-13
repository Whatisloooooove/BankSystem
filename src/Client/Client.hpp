#pragma once

#include <iostream>
#include <string>

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

  bool IsFullClient() {
       return address_.has_value() && passport_.has_value();
  }

  bool IsBanned() {
       return is_banned;
  }

 private:
  std::string first_name_;
  std::string last_name_;
  std::optional<std::string> address_;
  std::optional<std::string> passport_;
  bool is_banned;
};