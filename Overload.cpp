#include <iostream>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap(string &a, string &b) {
    string temp = a;
    a = b;
    b = temp;
}

void swap(double &a, double &b) {
    double temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 1, b = 2;
    swap(a, b);
    cout << a << " " << b << endl;

    string c = "a", d = "b";
    swap(c, d);
    cout << c << " " << d << endl;

    double e = 1.0, f = 2.0;
    swap(e, f);
    cout << e << " " << f << endl;
}
