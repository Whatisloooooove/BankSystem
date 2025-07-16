#include "WithdrawTransaction.hpp"

WithdrawTransaction::WithdrawTransaction(std::shared_ptr<Account>& account,
                                         double amount)
    : account_(account), amount_(amount) {}

void WithdrawTransaction::Execute() {
  account_->Withdraw(amount_);
  std::cout << "Вы успешно сняли " << amount_ << " со счёта "
            << account_->GetId() << '\n';
}

void WithdrawTransaction::Undo() {
  account_->Deposit(amount_);
  std::cout << "Отменена транзакция снятия в количестве: " << amount_
            << " со счёта " << account_->GetId() << '\n';
}
