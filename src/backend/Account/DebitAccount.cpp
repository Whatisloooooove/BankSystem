#include "DebitAccount.hpp"

DebitAccount::DebitAccount(double balance) : Account(balance) {}

DebitAccount::DebitAccount(uint64_t id, double balance) : Account(id, balance) {}

void DebitAccount::Withdraw(double amount) {
  if (amount > Account::balance_) {
    std::cout << "Недостаточно средств для выполнения операции";
  } else {
    Account::balance_ -= amount;
  }
}
void DebitAccount::Deposit(double amount) { Account::balance_ += amount; }