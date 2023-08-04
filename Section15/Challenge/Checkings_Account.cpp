#include "Checkings_Account.h"

Checkings_Account::Checkings_Account(std::string name, double balance, double withdraw_fee)
    :Account{name, balance}, withdraw_fee{withdraw_fee} {} 

bool Checkings_Account::withdraw(double amount) {
    amount = amount + withdraw_fee;
    return Account::withdraw(amount);
}

std::ostream &operator<<(std::ostream &os, const Checkings_Account &account) {
    os << "[Checking Account: " << account.name << ": " << account.balance << " withdraw fee:" << account.withdraw_fee << "]";
    return os;
}

