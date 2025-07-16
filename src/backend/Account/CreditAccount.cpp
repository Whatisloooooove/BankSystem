#include "CreditAccount.hpp"

CreditAccount::CreditAccount(double amount)
    : Account(amount), penalty(0.005 * amount) {}

CreditAccount::CreditAccount(uint64_t id, double amount)
    : Account(id, amount), penalty(0.005 * amount) {}

void CreditAccount::Withdraw(double amount) {
  if (Account::balance_ - amount < 0.0) {
    Account::balance_ -= (amount + penalty);
  } else {
    Account::balance_ -= amount;
  }
}

void CreditAccount::Deposit(double amount) { balance_ += amount; }