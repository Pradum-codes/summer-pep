#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_set<int> loggedIn;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x > 0) {    
            if (loggedIn.count(x)) {
                cout << "INVALID\n";
                return 0;
            }
            loggedIn.insert(x);
        }
        else {
            int user = -x;

            if (!loggedIn.count(user)) {
                cout << "INVALID\n";
                return 0;
            }
            loggedIn.erase(user);
        }
    }

    cout << "VALID\n";
    return 0;
}

// int main() {
//     int n; cin >> n;
//     vector<int> arr(n);
//     for(int i = 0; i<n; i++) cin >> arr[i];

//     int fin_sum = 0;

//     for(int i = 0; i<n; i++) {
//         fin_sum += arr[i];
//     }
    
//     if(fin_sum == 0) cout << "VALID" << endl;
//     else cout << "INVALID" << endl;
    
//     return 0;
// }
