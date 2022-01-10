#include <iostream>
#include <cmath>
#define EPSILON 0.0001f
using namespace std;

typedef int (*Func)(int, int);
int add(int, int);
int substract(int, int);
int multiply(int, int);
double pow(double, int);
double sqrt2(double);
bool isPrime(int); 
bool isPerfectSquare(int);

int main() {
    Func f[] = {add, substract, multiply};
    int a, b;
    int result;
    int choice;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    while(true) {
        cout << "1. Add -- 2. Substract -- 3. Multiply -- 4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if(choice == 4) break;
        result = f[choice - 1](a, b);
        cout << "Result: " << result << endl << endl;
    }
    // double (*g)(double, int);
    // double (*h)(double);
    // bool (*i)(int);
    // bool (*j)(int);
    // f = substract;
    // g = pow;
    // h = sqrt2;
    // i = isPrime;
    // j = isPerfectSquare;
    // cout << h(9) << endl;
    // cout << i(7) << endl;
    // cout << j(9) << endl;

}

int add (int a, int b) { return a + b; }

int substract (int a, int b) { return a - b; }

int multiply (int a, int b) { return a * b; }

double pow(double a, int b) {
    double result = 1;
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}

double sqrt2(double number) {
    double result = 1.0f;
    while (fabs(result * result - number) / number >= EPSILON)
        result = (number / result  - result) / 2 + result;
    return result;
}

bool isPrime(int a) {
    if (a == 1) return false;
    for (int i = 2; i < a; i++) {
        if (a % i == 0) return false;
    }
    return true;
}

bool isPerfectSquare(int a) {
    int result = 0;
    for (int i = 0; i < a; i++) {
        result += i;
    }
    return result == a;
}
