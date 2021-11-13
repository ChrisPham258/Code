#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e9;

int main(){
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    int t;
    cin >> t;
    while(t!=0){
        string st,s;
        cin >> st >> s;
        int ans=0;
        for(int i=0;i<st.size();++i)
            if(st[i] == s[i])
                ++ans;
            else
                ans+=2;
        cout << ans << endl;      
        --t;
    }
    return 0;
}
    