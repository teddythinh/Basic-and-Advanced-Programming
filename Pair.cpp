#include <iostream>

using namespace std;

int main() {
    pair<int, char> PAIR1;
    pair<string, double> PAIR2("Thinh Pham", 1.23);
    pair<string, double> PAIR3;
 
    PAIR1.first = 10;
    PAIR1.second = 'A';
 
    PAIR3 = make_pair("Pham Thinh", 4.56);
 
    cout << PAIR1.first << " ";
    cout << PAIR1.second << endl;
 
    cout << PAIR2.first << " ";
    cout << PAIR2.second << endl;
 
    cout << PAIR3.first << " ";
    cout << PAIR3.second << endl;
}
