#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    // test your code here
    try {
        unique_ptr<Account> yang_su_checking = make_unique<Checking_Account>("Su Yang", -500);
        cout << *yang_su_checking << endl;
    } catch(const IllegalBalanceException &ex) {
        cout << ex.what() << endl;
    }

    try {
        unique_ptr<Account> yang_su_checking = make_unique<Checking_Account>("Su Yang", 500);
        cout << *yang_su_checking << endl;
        yang_su_checking->withdraw(400);
        cout << *yang_su_checking << endl;
        yang_su_checking->withdraw(1000);
        cout << *yang_su_checking << endl;
    } catch(const InsufficentFundsException &ex) {
        cout << ex.what() << endl;
    } catch (...) {
        ;
    }

    std::cout << "Program completed successfully" << std::endl;
    return 0;
}

