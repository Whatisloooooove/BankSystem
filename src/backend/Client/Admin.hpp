#include "Client.hpp"

class Admin : public Client {
 public:
  Admin();

  void BanClient(const std::string& first_name, const std::string& last_name);

  void PrintHistory(const int64_t& id);

  void BanAccount(const int64_t& id);

 private:
  bool DeleteAccountFromDB(const int64_t& id);

  bool DeleteClientFromDB(std::string first_name, std::string last_name);
};