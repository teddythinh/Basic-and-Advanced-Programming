#include <iostream>
#include <random>
#include <functional>
#include <ctime>

using namespace std;

int main() {
    int a[100];
    int n = 100;
    default_random_engine generator;
    uniform_int_distribution<int> distribution(10, 100);
    auto roll = bind(distribution, generator);
    for(int i = 0; i < n; i++) {
        // int dice_roll = distribution(generator);
        // a[i] = dice_roll;
        a[i] = roll();
    }
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    
}
