#include <iostream>

using namespace std;

main() {
    int multiDimArray [3] [3] = \
    {{1,2,3}, {4,5,6}, {7,8,9}};

    cout << "Row 0: " << multiDimArray [0] [0] << ", " \
        << multiDimArray [0] [1] << ", " \
        << multiDimArray [0] [2] << " " << endl;

    cout << "Row 0: " << multiDimArray [1] [0] << ", " \
        << multiDimArray [1] [1] << ", " \
        << multiDimArray [1] [2] << " " << endl;

    cout << "Row 0: " << multiDimArray [2] [0] << ", " \
        << multiDimArray [2] [1] << ", " \
        << multiDimArray [2] [2] << " " << endl;

    return 0;
}