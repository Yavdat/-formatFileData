#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream input("data.txt");
    string year;
    string month;
    string day;
    // is_open необязателен
    if (input) {
        // getline(input, line);
        while (getline(input, year, '-')) {
            cout << year << endl;
            getline(input, month, '-');
            cout << month << endl;
            getline(input, day);
            cout << day << endl;
        }
    } else {
        cout << "error" << endl;
    }
    return 0;
}