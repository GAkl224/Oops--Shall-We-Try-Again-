#include <iostream>
#include <limits>
#include <string>

using namespace std;

//
int prompt(int lowBound, int upBound, string prompt, string error) {
    int value;
    bool validInput = false;

    // Repeat until valid input is received
    do {
        cout << prompt << endl;
        cin >> value;

        // Check if input is valid
        if (cin.fail() || value < lowBound || value > upBound) {
            cin.clear(); // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << error << endl;
        } else {
            validInput = true;
        }
    } while (!validInput);

    return value;
}

// prompt the user for a string input
string prompt( string prompt,  string error) {
    string value;
    bool validInput = false;

    // Repeat until valid input is received
    do {
        cout << prompt << endl;
        getline(cin, value);

        // Check if input is valid
        if (value.empty()) {
            cout << error << endl;
        } else {
            validInput = true;
        }
    } while (!validInput);

    return value;
}

int main() {
    //integer input
    int int_value = prompt(0, 100, "Please enter an integer value", "Your integer value is invalid");
    cout << "The integer value chosen by the user is " << int_value << endl;
    
    // string input
    string str_value = prompt("Please enter a string value", "Your string value is invalid");
    cout << "The string value chosen by the user is \"" << str_value << "\"" << endl;

    return 0;
}
