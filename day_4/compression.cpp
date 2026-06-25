#include <iostream>
using namespace std;

int main() {

    // aaabbcccc -> a3b2c4

    string str; cin >> str;
    string compressed = "";
    char current_char = str[0];
    int count = 0;

    for(char c : str) {
        if(c == current_char) {
            count++;
        } else {
            compressed += current_char;
            compressed += to_string(count);
            current_char = c;
            count = 1;
        }
    }
    compressed += current_char;
    compressed += to_string(count);

    cout << compressed << endl;
}