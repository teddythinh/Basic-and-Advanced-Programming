#include <iostream>

using namespace std;

template <typename T>
void permute(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void sort(T a[], T n) {
    for(T i = 0; i < n - 1; i++) {
        for(T j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                permute(a[i], a[j]);
            }
        }
    }
}

template <typename T>
void print(T a[], T n) {
    for(T i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {    
    int a = 1;
    int b = 2;
    
    string c = "Thinh";
    string d = "Pham";
    
    int e[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    int n = sizeof(e) / sizeof(e[0]);

    permute(a, b);
    permute(c, d);
    cout << a << " " << b << endl;
    cout << c << " " << d << endl;
    
    sort(e, n);
    print(e, n);
    return 0;
}
