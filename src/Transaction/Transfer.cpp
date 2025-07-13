#include <Transfer.hpp>

void Transfer::Execute() final {
  source_->Withdraw(amount_);
  target_->Deposit(amount_);
  std::cout << "Успешный перевод от " << source_->GetId() << " к " << target_->GetId() << " на сумму " << amount_ << '\n';
}

void Transfer::Undo() final {
  source_->Deposit(amount_);
  target_->Withdraw(amount_);
  std::cout << "Отмена перевода от " << source_->GetId() << " к " << target_->GetId() << " на сумму " << amount_ << '\n';
}
