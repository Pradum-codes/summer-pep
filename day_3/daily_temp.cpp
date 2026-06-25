#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];

    int current_c = 1;
    int max_c = 0;

    for(int i = 0; i<n-1; i++) {
        if(arr[i] < arr[i+1]){
            current_c += 1;
            max_c = max(max_c, current_c);
        } else {
            current_c = 1;
        }
    }

    cout << max_c << endl;
}