#pragma once

#include <stdint.h>

#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include "../Transaction/Command.hpp"

class Account {
 public:
  Account() = default;
  Account(double amount);
  Account(uint64_t id, double amount);

  uint64_t GetId() const noexcept;
  double GetBalance() const noexcept;

  virtual void Withdraw(double amount) = 0;
  virtual void Deposit(double amount) = 0;

  void AddToHistory(const std::shared_ptr<Command>& transaction);
  const std::vector<std::shared_ptr<Command>>& GetHistory() const;
  void CancelLastCommand();

 private:
  uint64_t CreateId();

 protected:
  uint64_t id_;
  double balance_;
  std::vector<std::shared_ptr<Command>> history_;
};