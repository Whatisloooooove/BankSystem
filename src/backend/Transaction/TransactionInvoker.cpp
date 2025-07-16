#include "TransactionInvoker.hpp"

void TransactionInvoker::ExecuteTransaction(std::shared_ptr<Command> transaction) {
  transactions_.push_back(transaction);
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

std::vector<std::shared_ptr<Command>> TransactionInvoker::GetClientHistory(AccountMap accounts) {
  std::vector<std::shared_ptr<Command>> history;
  for (auto [id, account] : accounts) {
    auto account_history = account->GetHistory();
    for (auto transaction : account_history) {
      history.emplace_back(transaction);
    }
  }
  return history;
}