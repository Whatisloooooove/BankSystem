#pragma once

#include <memory>
#include <src/Account/Account.hpp>

class Transfer {
 public:
  Transfer(std::shared_ptr<Account>& other_source,
              std::shared_ptr<Account>& other_target, double amount)
      : source_(std::move(other_source)),
        target_(std::move(other_target)),
        amount_(amount) {}

  void Execute() final;

  void Undo();

 private:
  double amount_;
  std::shared_ptr<Account> source_;
  std::shared_ptr<Account> target_;
};
