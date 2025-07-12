#include <iostream>
#include <stdint.h>
#include <string>
#include <vector>

#pragma once

class Account {
 public:
  Account() = default;

  Account(double amount);
  Account(uint64_t id, double amount);
  
  uint64_t GetId() const;
  double GetBalance();
  virtual void Withdraw(double amount) = 0;
  virtual void Deposit(double amount) = 0;

 private:
  uint64_t CreateId();

 protected:
  uint64_t id_;
  double balance_;
};