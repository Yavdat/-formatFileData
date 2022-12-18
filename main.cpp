#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream input("data.txt");
    string line;
    // is_open необязателен
    if (input) {
        // getline(input, line);
        while (getline(input, line)) {
            cout << line << endl;
        }
    } else {
        cout << "error" << endl;
    }
    return 0;
}