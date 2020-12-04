#include<iostream>

using namespace std;

int firstNumber = 0;
int secondNumber = 0;
int multiplicationResult = 0;

int MultiplyTwoNumbers() {

    cout << "Please Enter The First Integer: ";
    cin >> firstNumber;
    cout << "You Entered... " << firstNumber << endl;

    cout << "Please Enter The Second Integer: ";
    cin >> secondNumber;
    cout << "You Entered... " << secondNumber << endl;

    multiplicationResult = firstNumber * secondNumber;


    cout << "Displaying from multiplyNumbers(): " << endl;
    cout << "The formula is..., " << firstNumber << " x " << secondNumber;
    cout << ", and the Answer is... " << multiplicationResult << endl;
}

int main() {
    cout << "Multiplication called from a function" << endl;

    MultiplyTwoNumbers();

    cout << "Displaying from main(): " << endl;
    cout << "The formula is..., " << firstNumber << " x " << secondNumber;
    cout << ", and the Answer is... " << multiplicationResult << endl;

    return 0;
}