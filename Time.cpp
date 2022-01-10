#include <iostream>
#include <ctime> 
#include <windows.h>

using namespace std;

int main() {
    time_t t = time(0);
    tm now;
    localtime_s(&now, &t);
    
    while (true) {
        system("cls");
        cout << now.tm_mday << "-" << now.tm_mon + 1 << "-" << now.tm_year + 1900 << endl;
        cout << now.tm_hour << ":" << now.tm_min << ":" << now.tm_sec << flush;
        Sleep(1000);
        t = time(0);
        localtime_s(&now, &t);
    }
    return 0;
}
