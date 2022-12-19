#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

void ReadAll(const string& path) {
    ifstream input(path);
    if (input) {
        string line;
        while (getline(input, line)) {
            cout << line << endl;
        }
    }
}

int main() {
    const string path = "data.txt";
    ifstream input(path);
    int year;
    int month;
    int day;
    // is_open необязателен
    if (input) {
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

    vector<string> names = {"a", "b", "c"};
    vector<double> values = {5, 0.01, 0.000005};
    cout << setfill('.'); // заполняем отступы точками
    cout << left; // выравнивание по левому краю

    for (const auto& n : names) {
        cout << setw(10) << n << ' ';
    }
    cout << endl;
    cout << fixed << setprecision(2); // убираем экспоненциальный формат, и задаем точность
    for (const auto& v : values) {
        cout << setw(10) << v << ' ';
    }
    cout << endl;
    return 0;
}