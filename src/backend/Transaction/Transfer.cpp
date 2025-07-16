#include "Transfer.hpp"

Transfer::Transfer(std::shared_ptr<Account>& other_source,
                   std::shared_ptr<Account>& other_target, double amount)
    : source_(std::move(other_source)),
      target_(std::move(other_target)),
      amount_(amount) {}

void Transfer::Execute() {
  source_->Withdraw(amount_);
  target_->Deposit(amount_);
  std::cout << "Успешный перевод от " << source_->GetId() << " к "
            << target_->GetId() << " на сумму " << amount_ << '\n';
}

void Transfer::Undo() {
  source_->Deposit(amount_);
  target_->Withdraw(amount_);
  std::cout << "Отмена перевода от " << source_->GetId() << " к "
            << target_->GetId() << " на сумму " << amount_ << '\n';
}
