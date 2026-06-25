#include <iostream>
using namespace std;

int main() {
    string s, t; cin >> s >> t;

    if(s.length() != t.length()) {
        cout << "NO" << endl;
        return 0;
    }
    int m1[256] = {0}; 
    int m2[256] = {0};
    
    for(int i = 0; i < s.length(); i++) {
        if(m1[s[i]] != m2[t[i]]) {
            cout << "NO" << endl;
            return 0;
        }
        m1[s[i]] = i + 1;
        m2[t[i]] = i + 1;
    }
    
    cout << "YES" << endl;
    return 0;
}