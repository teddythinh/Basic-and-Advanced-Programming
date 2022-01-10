#include <iostream>

using namespace std;
typedef bool(*Comparator)(int, int);
bool swapAsending(int a, int b) { return a > b; }
bool swapDesending(int a, int b) { return a < b; }

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void sort(int a[], int n, Comparator shouldSwap) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(shouldSwap(a[i], a[j])) {
                swap(a[i], a[j]);
            }
        }
    }
}

void print(int a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int a[] = {9,8,7,6,5,4,3,2,1};
    int n = sizeof(a) / sizeof(a[0]);
    sort(a, n, swapAsending);
    print(a, n);
    sort(a, n, swapDesending);
    print(a, n);
}
