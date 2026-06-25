#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];

    int values[n];

    for(int i = 0; i<n; i++) {
        int found = -1;
        for(int j = i+1; j<n; j++){
            if(arr[j] > arr[i]){
                found = arr[j];
                break;
            }
        }
        values[i] = found;
    }

    for(int i = 0; i<n; i++) cout << values[i] << " ";
    cout << endl;
}