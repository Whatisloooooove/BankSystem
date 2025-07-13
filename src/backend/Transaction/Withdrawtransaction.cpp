#include <WithdrawTransaction.hpp>

void Execute() final {
  account_->Withdraw(amount_);
  std::cout << "Вы успешно сняли " << amount_ << " со счёта " << account_->GetId() << '\n';
}

void Undo() final {
  account_->Deposit(amount_);
  std::cout << "Отменена транзакция снятия в количестве: " << amount_ << " со счёта " << account_->GetId() << '\n';
}
