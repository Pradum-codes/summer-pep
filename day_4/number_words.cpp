#include <iostream>
#include <vector>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    int n = str.length();
    int count = 0;
    for (int i = 0; i <= n; i++) {
        if(i == n || str[i] == ' ') count++;
    }

    cout << count << endl;
}