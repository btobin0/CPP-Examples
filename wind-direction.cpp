#include <iostream>

using namespace std;

enum CardinalDirections {
    North = 25,
    South,
    East,
    West,
};

int main() {
    cout << "Displaying directions and Symbolic Values." << endl;
    cout << "North: " << North << endl;
    cout << "South: " << South << endl;
    cout << "East: " << East << endl;
    cout << "West: " << West << endl; 

    CardinalDirections windDirection = South;
    cout << "Variable windDirection = " << windDirection << endl;

    return 0;
}