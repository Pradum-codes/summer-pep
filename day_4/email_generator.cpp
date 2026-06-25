#include <iostream>
using namespace std;

int main() {
    string first, last; cin >> first >> last;
    string email = "";

    for(int i = 0; i<first.length(); i++) first[i] = tolower(first[i]);
    for(int i = 0; i<last.length(); i++) last[i] = tolower(last[i]);
    
    email = first + '.' + last + "@company.com";
    cout << email << endl;
}