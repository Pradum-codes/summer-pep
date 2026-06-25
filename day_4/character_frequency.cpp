#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    string str; cin >> str;
    unordered_map<char, int> freq;
    for(int i = 0; i < str.length(); i++) {
        freq[str[i]]++;
    }
    for(auto& it : freq) {
        cout << it.first << ": " << it.second << endl;
    }
}