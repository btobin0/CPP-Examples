#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    std::unordered_map<int, int> RANKS = {
        { 4, 3 },
        { 0, 2 }, { 2, 2 }, { 6, 2 }, { 8, 2 },
        { 1, 1 }, { 3, 1 }, { 5, 1 }, { 7, 1 }
};

    cout << "From Unordered Map: " << endl;
    cout << "By Static Coded Key: " << RANKS [4] << ", " \
        << RANKS [8] << ", " \
        << RANKS [7] << " " << endl;
    cout << "Entire Unordered Map" << endl;
    for( const auto& n : RANKS ) {
        std::cout << "Key:[" << n.first << "] Value:[" << n.second << "]\n";
    };

    int input;
    cout << "Please Enter Key From List. ";
    cin >> input;
    cout << "You Entered the Key... " << input << endl;
    //getline(cin,input)

    std::unordered_map<int,int>::const_iterator got = RANKS.find (input);

  if ( got == RANKS.end() )
    cout << "Key not found";
  else
    cout << "Key:[" << got->first << "] " << "is " << "Value:["  << got->second << "]\n";
    cout << endl;

    return 0;
}