#include <Command.hpp>
#include <iostream>
#include <src/Account/Account.hpp>

class WithdrawTransaction : public Command {
 public:
  WithdrawTransaction(std::shared_ptr<Account>& account, double amount)
      : account_(account), amount_(amount) {}

  void Execute() final;

  void Undo() final;

 private:
  double amount_;
  std::shared_ptr<Account> account_;
};
