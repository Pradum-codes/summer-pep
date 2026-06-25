#include<iostream>
using namespace std;

int main() {
    string s1,s2; cin >> s1 >> s2;

    for(char c : s1){
        if(s2.find(c) == string::npos){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}