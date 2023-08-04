#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance , double int_rate, double bonus)
    :Savings_Account{name, balance, int_rate}, bonus{bonus}, withdraw_count{0} {}

bool Trust_Account::deposit(double amount) {
    if (amount >= 5000.00) balance += bonus;
    return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
    if (withdraw_count == withdraw_count_limit || amount >= balance * withdraw_percent_limit) return false;
    ++withdraw_count;
    return Savings_Account::withdraw(amount);
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account) {
    os << "[Trust_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "% and bonus:" << account.bonus << "]";
    return os;
}