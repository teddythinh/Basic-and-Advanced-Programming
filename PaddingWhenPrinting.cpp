#include <iostream>
#include <iomanip>

using namespace std;

int main() {    
    int day = 1;
    int month = 1;
    int year = 1900;
    // setw(2) means the width of the output is 2
    // setfill('0') means the output is filled with 0
    cout << setw(2) << setfill('0') << day << "/" << setw(2) << setfill('0') << month << "/";
    cout << year << endl;
}
