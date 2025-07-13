#include <TransactionInvoker.hpp>

void TransactionInvoker::ExecuteTransaction(std::shared_ptr<Command> transaction) {
  transactions_.insert(transaction);
  transaction->Execute();
}

void TransactionInvoker::CancelLastTransaction() {
  if (transactions_.empty()) {
    std::cout << "Невозможно отменить транзакции, ни одной транзакции не было сделано" << '\n';
  }
  transactions_.pop_back();
}

void TransactionInvoker::CancelLastTransactionClientAccount(std::shared_ptr<Account> account) {
  account->CancelLastCommand();
}

CommandHistory GetClientHistory(AccountMap accounts) {
  std::vector<std::shared_ptr<Account>> history;
  for (auto [id, account] : accounts) {
    auto account_history = account.GetHistory();
    for (auto transaction : account_history) {
      history.push_back(transaction);
    }
  }
  return history;
}