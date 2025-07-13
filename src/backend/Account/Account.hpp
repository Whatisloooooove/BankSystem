#pragma once

#include <iostream>
#include <memory>
#include <stdint.h>
#include <string>
#include <vector>

class Command;

class Account {
 public:
  Account() = default;

  Account(double amount);
  Account(uint64_t id, double amount);
  
  uint64_t GetId() const;
  double GetBalance() const;
  virtual void Withdraw(double amount) = 0;
  virtual void Deposit(double amount) = 0;

  void AddToHistory(std::shared_ptr<Command>& transaction);
  std::vector<std::shared_ptr<Command>> GetHistory()
  void CancelLastCommand();

 private:
  uint64_t CreateId();

 protected:
  uint64_t id_;
  double balance_;
  std::vector<std::shared_ptr<Command>> history_;
};