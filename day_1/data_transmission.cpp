#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cin >> str;

    stack<char> st;

    for (char ch : str) {
        if (!st.empty() && st.top() == ch)
            st.pop();
        else
            st.push(ch);
    }

    string fin;

    while (!st.empty()) {
        fin += st.top();
        st.pop();
    }

    reverse(fin.begin(), fin.end());

    if (fin.empty())
        cout << "EMPTY\n";
    else
        cout << fin << '\n';

    return 0;
}