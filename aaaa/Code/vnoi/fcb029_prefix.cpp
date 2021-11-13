#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,st;
    cin >> s >> st;
    if(st.find(s) == 0)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
