#include <iostream>

#include <Command.hpp>
#include <src/Account.hpp>

class DepositTransaction : public Command {
 public:
  DepositTransaction(std::shared_ptr<Account>& account, double amount)
      : account_(account), amount_(amount) {}

  void Execute() final;

  void Undo() final;

 private:
  double amount_;
  std::shared_ptr<Account> account_;
};
