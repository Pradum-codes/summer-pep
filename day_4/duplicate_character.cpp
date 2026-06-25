#include <iostream>
using namespace std;

int main() {
    string str; cin >> str;
    string result = "";
    for(int i = 0; i < str.length(); i++) {
        if(result.find(str[i]) == string::npos) {
            result += str[i];
        }
    }
    cout << result << endl;
}