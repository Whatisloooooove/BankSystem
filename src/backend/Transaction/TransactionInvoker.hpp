#include <iostream>
#include <memory>
#include <vector>
#include <unordered_map>

#include "../Account/Account.hpp"
#include "Command.hpp"

class TransactionInvoker {
 private:
  using AccountMap = std::unordered_map<uint64_t, std::shared_ptr<Account>>;

  std::vector<std::shared_ptr<Command>> transactions_;

 public:
  void ExecuteTransaction(std::shared_ptr<Command> transaction);

  void CancelLastTransaction();

  void CancelLastTransactionClientAccount(std::shared_ptr<Account> account);

  std::vector<std::shared_ptr<Command>> GetClientHistory(AccountMap accounts);
};
