#include <iostream>
using namespace std;

//will promt user to enter a value
//and will deem is value is within bounds
int validInput()
{
    int userInput;

    cout << "Enter valid integer: ";
    cin >> userInput;

    //lower bound is 1
    //promts user to enter valid value
    while(userInput < 1)
    {
        cout << "\nInput is invalid\nEnter valid integer: ";
        cin >> userInput;

    }
    
   cout << "\nThe value chosen by user is: " << userInput;

   return 1;
}

int main () {

 validInput();
}