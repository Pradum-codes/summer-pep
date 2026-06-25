#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n;
    int key = -1;
    vector<int> arr(n);
    
    for(int i = 0; i<n; i++) cin >> arr[i];
    cin >> key;

    for(int i = 0; i<n; i++) {
        if(key == arr[i]) {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}