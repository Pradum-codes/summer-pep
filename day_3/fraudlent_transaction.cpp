#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++) {
        int ele;
        cin >> ele;
        mp[ele]++;
    }

    int maxCount = 0;
    int answer = -1;

    for (auto it : mp) {
        if (it.second > maxCount) {
            maxCount = it.second;
            answer = it.first;
        }
    }

    cout << answer << endl;
}