#include <iostream>

using namespace std;

// allocate array
int *allocateArray(int size) {
    int *array = new int[size];
    return array;
}

void inputArray(int *array, int size) {
    cout << "Please input " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
}

void printArray(int *array, int size) {
    cout << "The array is: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void deleteArray(int *array) {
    delete[] array;
    cout << "The array is deleted." << endl;
}

int main() {
    int i = 10;
    int j = 20;
    int* temp = NULL;

    temp = &i;
    *temp = 100;

    cout << i << "\n\n";

    int *array = allocateArray(10);
    inputArray(array, 10);
    printArray(array, 10);
    deleteArray(array);

}
