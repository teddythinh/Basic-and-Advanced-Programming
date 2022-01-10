#include <iostream>
#include <string>

using namespace std;

int main() {
    string buffer;
    cout << "Enter this year: ";
    getline(cin, buffer);

    try {
        int year = stoi(buffer);
        cout << "The next year is " << year + 1 << endl;
    } catch (const exception& e) {
        cout << "Invalid input. Error: " << e.what() << endl;
    }
}
