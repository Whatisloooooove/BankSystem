#include <iostream>

#include "../Account/Account.hpp"
#include "Command.hpp"

class WithdrawTransaction : public Command {
 public:
  WithdrawTransaction(std::shared_ptr<Account>& account, double amount);

  void Execute() final;

  void Undo() final;

 private:
  std::shared_ptr<Account> account_;
  double amount_;
};
