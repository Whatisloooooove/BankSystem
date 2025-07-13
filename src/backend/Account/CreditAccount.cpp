#include <CreditAccount.hpp>

CreditAccount::CreditAccount(double amount)
    : penalty(0.005 * amount), Account(amount) {}

CreditAccount::CreditAccount(int64_t id, double amount)
    : penalty(0.005 * amount), Account(id, amount) {}

void CreditAccount::Withdraw(double amount) {
  if (Account::balance_ - amount < 0.0) {
    Account::balance_ -= (amount + penalty);
  } else {
    Account::balance_ -= amount;
  }
}

void CreditAccount::Deposit(double amount) { balance_ += amount; }