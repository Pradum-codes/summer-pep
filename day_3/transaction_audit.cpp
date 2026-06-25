#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int target;
    cin >> target;

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++) {
        int need = target - arr[i];

        if (mp.find(need) != mp.end()) {
            cout << "YES" << endl;
            return 0;
        }

        mp[arr[i]] = i;
    }

    cout << "N)" << endl;
    return 0;
}