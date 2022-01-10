#include <iostream>

using namespace std;

bool isLeapYear(int year) {
    bool result = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    return result;
}

int maxDaysOfMonth(int month, int year) {
    int days = 0;
    int maxDays[] = {-1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(isLeapYear(year)) {
        maxDays[2] = 29;
    }
    days = maxDays[month];
    return days;
}

int main() {
    int month, year;
    cin >> month >> year;
    int days = maxDaysOfMonth(month, year);
    cout << days << "/" << month << "/" << year << endl;
}
