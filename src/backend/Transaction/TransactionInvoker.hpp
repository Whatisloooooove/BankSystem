#include <memory>
#include <set>
#include <unordered_set>

#include "Transaction.hpp"

class TransactionInvoker {
 private:
  using CommandHistory = std::vector<std::shared_ptr<Command>>;
  using AccountMap = std::unordered_map<uint64_t, std::shared_ptr<Account>>;

  std::vector<std::shared_ptr<Command>> transactions_;

 public:
  void ExecuteTransaction(std::shared_ptr<Command> transaction);

  void CancelLastTransaction();

  void CancelLastTransactionClientAccount(std::shared_ptr<Account> account);

  CommandHistory GetClientHistory(AccountMap accounts);
};
