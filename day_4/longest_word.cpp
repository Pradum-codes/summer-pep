#include <iostream>
#include <vector>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    int maxLength = 0;
    string longestWord = "";
    int n = str.length();
    int start = 0;
    int lastSpace = -1;
    for (int i = 0; i <= n; i++) {
        if(i == n || str[i] == ' ') {
            int wordLength = i - lastSpace - 1;
            if (wordLength > maxLength) {
                maxLength = wordLength;
                longestWord = str.substr(lastSpace + 1, wordLength);
            }
            lastSpace = i;
        }
    }

    cout << longestWord << endl;
}