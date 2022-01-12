#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> dict {
        {"a", 1},
        {"b", 2},
        {"c", 3}
    };
    dict.insert({"d", 4});

    cout << dict["a"] << endl;
    cout << dict["d"] << endl;
    cout << dict.size() << endl;

    auto it = dict.find("a");
    if (it != dict.end()) {
        cout << it->second << endl;
    }

    auto it2 = dict.find("e");
    if (it2 == dict.end()) {
        cout << "not found" << endl;
    }
    
}
