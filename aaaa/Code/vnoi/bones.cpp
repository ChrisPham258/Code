#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e9;
int dem[100];
int s1,s2,s3,ans=INT_MIN;
void solve(){
    cin >> s1 >> s2 >> s3;
    for(int i=1;i<=s1;++i)
        for(int j=1;j<=s2;++j)
            for(int k=1;k<=s3;++k){
                int a=i+j+k;
                ++dem[a];
            }
    for(int i=0;i<=100;++i)
        ans=max(ans,dem[i]);
    for(int i=0;i<=100;++i)
        if(ans == dem[i]){
            cout << i;
            break;
        }
    cout << ans;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    solve();
    return 0;
}
    