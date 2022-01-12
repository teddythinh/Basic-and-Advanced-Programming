#include <iostream>
#include <tuple>

using namespace std;

int main() {
    tuple<char, int, float> geek;

    geek = make_tuple('A', 1, 1.1);

    cout << get<0>(geek) << " " << get<1>(geek) << " " << get<2>(geek) << endl;

    get<0>(geek) = 'B';
    get<1>(geek) = 2;
    get<2>(geek) = 2.2;

    cout << get<0>(geek) << " " << get<1>(geek) << " " << get<2>(geek) << endl;
}
