/*
REFERENCES: https://docs.microsoft.com/en-us/cpp/cpp/smart-pointers-modern-cpp/
            https://www.geeksforgeeks.org/smart-pointers-cpp/
*/

// Must include <memory> header file
#include <iostream>
#include <memory>
#include <string>

using namespace std;

int main() {
    //unique pointer
    unique_ptr<string> up(new string("hello"));
    cout << *up << endl;
    //shared pointer
    shared_ptr<string> sp(new string("world"));
    cout << *sp << endl;
    //weak pointer
    weak_ptr<string> wp(sp);
    cout << *wp.lock() << endl;
    
    //smart pointer
    shared_ptr<string> p1(new string("hello"));
    shared_ptr<string> p2(new string("world"));
    shared_ptr<string> p3(new string("!"));

    cout << *p1 << " " << *p2 << " " << *p3 << endl;

    //weak pointer
    weak_ptr<string> wp1(p1);
    weak_ptr<string> wp2(p2);
    weak_ptr<string> wp3(p3);

    cout << "wp1 use_count: " << wp1.use_count() << endl;
    cout << "wp2 use_count: " << wp2.use_count() << endl;
    cout << "wp3 use_count: " << wp3.use_count() << endl;

    //reset
    p1.reset();
    p2.reset();
    p3.reset();

    cout << "wp1 use_count: " << wp1.use_count() << endl;
    cout << "wp2 use_count: " << wp2.use_count() << endl;
    cout << "wp3 use_count: " << wp3.use_count() << endl;

}
