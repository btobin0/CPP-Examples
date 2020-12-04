#include<iostream>

using namespace std;

int MultiplyTwoNumbers() {

    cout << "Please Enter The First Integer: ";
    int firstNumber;
    cin >> firstNumber;
    cout << "You Entered... " << firstNumber << endl;

    cout << "Please Enter The Second Integer: ";
    int secondNumber;
    cin >> secondNumber;
    cout << "You Entered... " << secondNumber << endl;

    int multiplicationResult = firstNumber * secondNumber;

    cout << "The Formula Will be... " << firstNumber << " x " << secondNumber << endl;
    cout << "The Answer is... " << multiplicationResult << endl;
}

int main() {
    cout << "This is a simple 2 number multiplication app" << endl;

    MultiplyTwoNumbers();
}