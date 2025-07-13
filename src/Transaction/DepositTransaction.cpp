#include <DepositTransaction.hpp>

void Execute() final {
  account_->Deposit(amount_);
  std::cout << "Успешное пополнение счёта " << account_->GetId() << " на сумму "
            << amount_ << '\n';
}

void Undo() final {
  account_->Withdraw(amount_);
  std::cout << "Отмена пополнения счёта " << account_->GetId() << " на сумму "
            << amount_ << '\n';
}
