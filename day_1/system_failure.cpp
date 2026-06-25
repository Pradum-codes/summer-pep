#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    
    for(int i = 0; i<n; i++) cin >> arr[i];

    for(int i = 0; i<n-1; i++) {
        if(arr[i] > arr[i+1]) {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}