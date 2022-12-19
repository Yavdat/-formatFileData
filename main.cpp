#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream input("data.txt");
    int year;
    int month;
    int day;
    // is_open необязателен
    if (input) {
        // getline(input, line);
        // while (getline(input, year, '-')) {
        //     cout << year << endl;
        //     getline(input, month, '-');
        //     cout << month << endl;
        //     getline(input, day);
        //     cout << day << endl;
        // }
        while(input) {
            input >> year;
            input.ignore(1);
            input >> month;
            input.ignore(1);
            input >> day;
            input.ignore(1);
            cout << year << ' ' << month << ' ' << day << endl;
        }
    } else {
        cout << "error" << endl;
    }
    return 0;
}