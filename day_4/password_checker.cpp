#include<iostream>
using namespace std;

int main() {
    string str; cin >> str;
    if(! (str.length() >= 8)){
        cout << "Invalid Length" << endl;
        return 0;
    }

    bool arr[] = {false, false, false, false};
    
    for(int i = 0; i<str.length(); i++){
        if(isupper(str[i])) arr[0] = true;
        if(islower(str[i])) arr[1] = true;
        if(isdigit(str[i])) arr[2] = true;
        if(ispunct(str[i])) arr[3] = true;
    }

    for(int i = 0; i<4; i++){
        if(!arr[i]){
            cout << "Weak" << endl;
            return 0;
        }
    }
    cout << "Strong" << endl;
}

