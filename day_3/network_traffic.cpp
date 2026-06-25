#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];

    int l_sum = 0;
    int r_sum = 0;
    for(int i = 1; i<n; i++) r_sum += arr[i];

    for(int i = 0; i<n; i++){
        if(l_sum == r_sum){
            cout << i << endl;
            return 0;
        } else {
            l_sum += arr[i];
            r_sum -= arr[i+1];
        }
    }

    cout << -1 << endl;
}