#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmx=2e5;

bool check(string s){
    bool cnt1 = 0, cnt2=0, cnt3=0;
    for (char c : s) {
        if ('0' <= c && c <= '9')
            cnt1=1;
        if ('a' <= c && c <= 'z')
            cnt2=1;
        if ('A' <= c && c <= 'Z')
            cnt3=1;
        if (cnt1 && cnt2 && cnt3 && s.size() >= 6)
            return 1;
    }
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);

    string s;
    cin >> s;
    string curr = "";
    int i = 0;
    while (!check(curr) && i<s.size()){
        curr += s[i];
        ++i;
    }
    if(!check(curr))
        cout << 0;
    else{
        int cnt1 = s.size() - curr.size() + 1;
        curr = "";
        i = s.size()-1;
        while (!check(curr) && i>=0){
            curr += s[i];
            --i;
        }
        cout << curr << endl;
        int cnt2 = s.size() - curr.size() + 1;
        cout << cnt1  << " " << cnt2;
        cout << cnt1 * cnt2 ;
    }
    return 0;
}
    