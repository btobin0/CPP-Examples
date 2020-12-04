#include <iostream>
#include <string>

using namespace std;

int main() {
    int inputNumber;

    cout << "Please Enter An Integer: ";
    cin >> inputNumber;

    cout << "What Is Your Name? ";
    string inputName;
    cin >> inputName;

    cout << inputName << " entered " << inputNumber << endl;

    return 0;
}