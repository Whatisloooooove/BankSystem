#include <memory>
#include <string>

#include <Admin.hpp>
#include <Client.hpp>

class ClientBuilder {
 public:
 
  void SetFirstName(std::string first_name) { 
    first_name_ = first_name; 
  }

  void SetLastName(std::string last_name) { 
    last_name_ = last_name; 
  }

  void SetPassport(std::string passport) {
    passport_ = passport;
  }

  void SetAddress(std::string address) {
    address_ = address;
  }

  std::shared_ptr<Client> CreateAccount();

 private:
  std::string first_name_;
  std::string last_name_;
  std::string address_;
  std::string passport_;
};