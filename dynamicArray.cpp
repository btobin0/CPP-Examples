#include <iostream>
#include <vector>

using namespace std;

int main () {
    vector<int> dynArray (3); //Starting amount in arrary.

    dynArray[0] = 1;
    dynArray[1] = 2;
    dynArray[2] = 3;

    cout << "Current Numbers in Array: " << dynArray.size() << endl;
    cout << "Row 0: " << dynArray [0] << ", " \
        << dynArray [1] << ", " \
        << dynArray [2] << " " << endl;

    cout << "Please Enter an Interger to Expand Array: " << endl;
    int newVal = 0;
    cin >> newVal;
    dynArray.push_back(newVal);

    cout << "New Total of Integers In Array: " << endl;
    cout << "Last Number in Array: ";
    cout << dynArray[dynArray.size() - 1] << endl;

    cout << "Row 0: " << dynArray [0] << ", " \
        << dynArray [1] << ", " \
        << dynArray [2] << ", " \
        << newVal << endl;

    return 0;
}