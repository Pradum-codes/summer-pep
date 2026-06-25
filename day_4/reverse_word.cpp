#include <iostream>
#include <vector>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    int n = str.length();
    int start = 0;

    for (int i = 0; i <= n; i++) {
        if (i == n || str[i] == ' ') {
            int end = i - 1;
            while (start < end) {
                swap(str[start], str[end]);
                start++;
                end--;
            }
            start = i + 1;
        }
    }

    cout << str << endl;
}