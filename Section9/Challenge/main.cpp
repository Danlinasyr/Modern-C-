// Section 9
// Challenge
/*    
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.
    
    Your program should display a menu options to the user as follows:
    
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:
    
The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.


If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
For example, [ 1 2 3 4 5 ]
      
If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".
Duplicate list entries are OK

If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

Finally, be sure to test your program as you go and at the end.

Hint: Use a vector!

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!

Good luck!

*/
#include <iostream>
#include <vector>

using namespace std;

vector<int> nums;

void print() {
    cout << "[ ";
    for (auto num : nums) {
        cout << num << " ";
    }
    cout << "]" << endl;
}

int find_min() {
    int min_num = INT_MAX;
    for (auto num : nums) {
        min_num = min(min_num, num);
    }
    return min_num;
}

int find_max() {
    int max_num = INT_MIN;
    for (auto num : nums) {
        max_num = max(max_num, num);
    }
    return max_num;
}

double average() {
    // assume function only is called when nums vector is not empty
    double avg {0.0};
    int sum {0};
    for (auto num : nums) {
      sum += num;
    } 
    avg = static_cast<double>(sum) / nums.size();
    return avg;
}


int main() {
    const string menu = " \n"
                        "P - Print numbers\n"
                        " A - Add a number\n"
                        " M - Display the mean of the numbers\n"
                        " S - Display the smallest number\n"
                        " L - Display the largest number\n"
                        " Q - Quit\n"
                        "\n Enter a choice: ";
    bool running{true};
    while (running) {
        cout << menu;
        char input{};
        cin >> input;
        
        switch(input) {
            case 'p':
            case 'P': 
                print();
                break;
            case 'a':
            case 'A':
                {
                cout << "Please enter an integer number to add:";
                int number{0};
                cin >> number;
                nums.push_back(number);
                cout << number << " is added" << endl;
                break;
                }
            case 'm':
            case 'M':
                if (nums.size() == 0) {
                    cout << "Unable to calculate the mean - no data" << endl;
                } else {
                    cout << average() << endl;
                }
                break;
            case 's':
            case 'S':
                if (nums.size() == 0) {
                    cout << "Unable to determine the smallest number - list is empty" << endl;
                } else {
                    cout << "The smallest number is : " << find_min() << endl;
                }
                break;
            case 'l':
            case 'L':
                if (nums.size() == 0) {
                    cout << "Unable to determine the largest number - list is empty" << endl;
                } else {
                    cout << "The largest number is " << find_max() << endl;
                }
                break;
            case 'q':
            case 'Q':
                cout << "Good Bye!" << endl;
                running = false;
                break;
            default:
                cout << "Unknow selection, please try again" << endl;
                break;
        }
    } 

    return 0;
}

