/*
NOTE: 
IF YOU WANT TO CHECK REGEX EXPRESSION, PLEASE USE THIS WEBSITE: https://regexr.com/ or https://regex101.com/
IF YOU WANT TO LEARN MORE ABOUT REGEX, PLEASE USE THIS WEBSITE: https://regexlearn.com/
*/

#include <iostream>
#include <regex>

using namespace std;

bool is_valid_username(const string& username)
{
    // username must be at least 6 characters long
    regex pattern("^[a-zA-Z0-9_]{6,20}$");
    return regex_match(username, pattern);
}

bool is_valid_email(const string& email)
{
    // email format: abc@zyz.com
    regex pattern("^[a-zA-Z0-9_-]+@[a-zA-Z0-9_-]+(\\.[a-zA-Z0-9_-]+)+$");
    return regex_match(email, pattern);
}

bool is_valid_day(const string& day)
{
    // date format: dd/mm/yyyy
    regex pattern("^(0[1-9]|[12][0-9]|3[01])/(0[1-9]|1[012])/[0-9]{4}$");
    return regex_match(day, pattern);
}


int main() {
    string username;
    while(true) {
        cout << "Enter username: ";
        cin >> username;
        if(is_valid_username(username)) {
            cout << "Valid" << endl;
            break;
        } else {
            cout << "Username must be at least 6 characters long and can only contain alphanumeric characters and underscores" << endl;
            cout << "Please input again." << endl;
        }
    }

    string email;

    while(true) {
        cout << "Please input email: ";
        cin >> email;
        if (is_valid_email(email)) {
            cout << "Valid" << endl;
            break;
        } else {
            cout << "Invalid. Please input again." << endl;
        }
    }
    
    string day;
    while(true) {
        cout << "Please input DOB (dd/mm/yyyy): ";
        cin >> day;
        if (is_valid_day(day)) {
            cout << "Valid" << endl;
            break;
        } else {
            cout << "Invalid. Please input again" << endl;
        }
    }

    cout << endl << "--- Login successful ---" << endl;
    cout << "Username: " << username << endl;
    cout << "Email: " << email << endl;
    cout << "DOB: " << day << endl;

    return 0;
}
