#include <iostream>
#include <limits>

using namespace std;


int prompt(int lowBound, int upBound, string promt, string error) {
    int value;
    bool validInput = false;

    // Repeat until valid input is received
    do {
        cout << prompt << endl;
        cin >> value;

        // Check if input is valid
        if (cin.fail() || value < lowBound || value > upBound) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); /
            cout << error << endl;
        } else {
            validInput = true;
        }
    } while (!validInput);

    return value;
}

int main() {
    
    int value = prompt(0, 100, "Please enter a value", "Your value is invalid");
    cout << "The value chosen by the user is " << value << endl;
    
    return 0;
}
