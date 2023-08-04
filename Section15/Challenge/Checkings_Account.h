#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_

#include "Account.h"

class Checkings_Account : public Account {
    friend std::ostream &operator<<(std::ostream &os, const Checkings_Account &account);
public:
    Checkings_Account(std::string name = def_name, double balance = def_balance, double withdraw_fee = def_withdraw_fee);
    // using inherited deposit method from base Account class
    bool withdraw(double amount);
protected:
    double withdraw_fee;

private:
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_withdraw_fee = 0.0;
};

#endif