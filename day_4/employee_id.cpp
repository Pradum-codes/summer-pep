#include <iostream>
using namespace std;

bool isUpperCase(char c) {
    return c >= 'A' && c <= 'Z';
}

bool isDigit(char c) {
    return c >= '0' && c <= '9';
}

int main() {
    string str;
    cin >> str;

    if (str.length() != 8) {
        cout << "Invalid Length" << endl;
        return 0;
    }

    if (!isUpperCase(str[0]) || !isUpperCase(str[1]) ||
        !isDigit(str[2]) || !isDigit(str[3]) ||
        !isDigit(str[4]) || !isDigit(str[5]) ||
        !isUpperCase(str[6]) || !isUpperCase(str[7])) {
        cout << "Invalid Format" << endl;
        return 0;
    }

    cout << "Valid" << endl;
}