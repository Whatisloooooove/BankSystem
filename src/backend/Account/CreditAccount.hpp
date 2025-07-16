#include "Account.hpp"

class CreditAccount : public Account {
 private:
  double penalty;

 public:
  CreditAccount() = default;
  CreditAccount(double amount);
  CreditAccount(uint64_t id, double amount);
  void Withdraw(double amount) final;
  void Deposit(double amount) final;
};