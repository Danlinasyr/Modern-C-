// Section 16 
// Challenge 
#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std; 

int main() {
    cout.precision(2);
    cout << fixed;
    
    Account *save_acc = new Savings_Account("Wonderwoman", 5000, 5.0);
    Account *check_acc = new Checking_Account("Bones", 5000);
    Account *trust_acc = new Trust_Account("Porthos", 20000, 4.0);
    vector<Account*> accounts {save_acc, check_acc, trust_acc};

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);
   
    // Withdraw 5 times from each trust account
    // All withdrawals should fail if there are too many withdrawals or if the withdrawl is > 20% of the balance
    for (int i=1; i<=5; i++)
        withdraw(accounts, 1000);
    
    delete save_acc;
    delete check_acc;
    delete trust_acc;
    return 0;
}

