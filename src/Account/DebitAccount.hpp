#include <Account.hpp>

class DebitAccount : public Account {
 public:
  DebitAccount() = default;
  DebitAccount(double balance);
  DebitAccount(uint64_t id, double balance);
  void Withdraw(double amount) final;
  void Deposit(double amount) final;
};