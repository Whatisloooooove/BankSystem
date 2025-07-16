#include "DepositTransaction.hpp"

DepositTransaction::DepositTransaction(std::shared_ptr<Account>& account,
                                       double amount)
    : account_(account), amount_(amount) {}

void DepositTransaction::Execute() {
  account_->Deposit(amount_);
  std::cout << "Успешное пополнение счёта " << account_->GetId() << " на сумму "
            << amount_ << '\n';
}

void DepositTransaction::Undo() {
  account_->Withdraw(amount_);
  std::cout << "Отмена пополнения счёта " << account_->GetId() << " на сумму "
            << amount_ << '\n';
}
