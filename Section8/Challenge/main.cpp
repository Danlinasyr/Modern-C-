// Section 8 Challenge
/*
	For this program I will be using US dollars and cents.
	
    Write a program that asks the user to enter the following:
	An integer representing the number of cents 
    	
	You may assume that the number of cents entered is greater than or equal to zero
    
	The program should then display how to provide that change to the user.
	
	In the US:
		1 dollar is 100 cents
		1 quarter is 25 cents
		1 dime is 10 cents
		1 nickel is 5 cents, and
		1 penny is 1 cent.
		
	Here is a sample run:
	
	Enter an amount in cents :  92
	
	You can provide this change as follows:
	dollars    : 0
	quarters : 3
	dimes     : 1
	nickels   : 1
	pennies  : 2
	
	Feel free to use your own currency system.
	Also, think of how you might solve the problem using the modulo operator.

	Have fun and test your program!!

*/
#include <iostream>

using namespace std;

int main() {

	const int cent_per_dollar{100};
    const int cent_per_quarter{25}; 
	const int cent_per_dime{10}; 
    const int cent_per_nickel{5};
    const int cent_per_penny{1};
	int cents{0};
	cout << "Please Enter a Integer number of cents for Change: ";
    cin >> cents;
    int dollar = cents / cent_per_dollar;
    cents %= cent_per_dollar;
    int quarter = cents / cent_per_quarter;
    cents %= cent_per_quarter;
    int dime = cents / cent_per_dime;
    cents %= cent_per_dime;
    int nickel = cents / cent_per_nickel;
    cents %= cent_per_nickel;
    int penny = cents / cent_per_penny;
    cents %= cent_per_penny;

    if (cents) {
    	  cout << "ERROR: Inbalanced Change" << endl;
    }
	cout << "dollars : " << dollar << endl;
	cout << "quarters : " << quarter << endl; 
	cout << "dimes : "  << dime << endl;   
	cout << "nickels : " << nickel << endl;
	cout << "pennies : " << penny << endl;
    cout << endl;
    return 0;
}


