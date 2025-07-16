#include <iostream>

#include "../Account/Account.hpp"
#include "Command.hpp"

class DepositTransaction : public Command {
 public:
  DepositTransaction(std::shared_ptr<Account>& account, double amount);

  void Execute() final;

  void Undo() final;

 private:
  std::shared_ptr<Account> account_;
  double amount_;
};
