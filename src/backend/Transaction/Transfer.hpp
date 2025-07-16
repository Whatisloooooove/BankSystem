#pragma once

#include <memory>

#include "../Account/Account.hpp"
#include "Command.hpp"

class Transfer : public Command {
 public:
  Transfer(std::shared_ptr<Account>& other_source,
           std::shared_ptr<Account>& other_target, double amount);

  void Execute() final;

  void Undo() final;

 private:
  std::shared_ptr<Account> source_;
  std::shared_ptr<Account> target_;
  double amount_;
};
