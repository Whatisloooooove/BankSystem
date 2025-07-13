#include <Account.hpp>
#include <random>

Account::Account(double amount) : id_(CreateId()), balance_(amount) {}

Account::Account(uint64_t id, double amount) : id_(id), balance_(amount) {}

uint64_t Account::CreateId() {
  std::random_device rd;
  std::mt19937_64 gen(rd());
  std::uniform_int_distribution<uint64_t> dis(10000000, 99999999);
  uint64_t id = dis(gen);
  return id;
}

uint64_t Account::GetId() const { return id_; }

double Account::GetBalance() const { return balance_; }

void AddToHistory(std::shared_ptr<Command>& transaction) {
  history_.push_back(transaction);
}

std::vector<std::shared_ptr<Command>> GetHistory() { return history_; }

void CancelLastCommand() {
  history_.back().Undo();
  history_.pop_back();
}