#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_

#include "Savings_Account.h"

class Trust_Account : public Savings_Account {
    friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);
public:
    Trust_Account(std::string name = def_name, double balance =def_balance, double int_rate = def_int_rate, double bonus = def_bonus);
    bool deposit(double amount);
    bool withdraw(double amount);
protected:
    double bonus;
    double withdraw_count;
private:
    static constexpr const char *def_name = "Unnamed Savings Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
    static constexpr double def_bonus = 0.0;
    static constexpr double withdraw_percent_limit = 20;
    static constexpr int withdraw_count_limit = 3;
};

#endif