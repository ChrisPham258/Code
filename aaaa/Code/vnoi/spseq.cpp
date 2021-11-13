#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmx=2e5;

int n,ans=INT_MIN,F,S,res=1;
int a[nmx],b[nmx];
int f[nmx],s[nmx];

void longest(int dp[], int n,int a[]){
    int m,d,c;
    dp[1]=1;
    for(int i=2;i<=n;++i){
        d=0;
        c=res+1;
        while(d+1 != c){
            m=(d+c)/2;
            if(a[i] <= a[dp[m]])
                c=m;
            else
                d=m;
        }
        dp[d+1]=i;
        if(d == res)
            ++res;
    }
    // return res;
}

void solve(){
    cin >> n;
    int cmp=n;
    
    for(int i=1;i<=n;++i)
        cin >> a[i];
    
    for(int i=1;i<=n;++i){
        b[cmp]=a[i];
        --cmp;
    }
    longest(f,n,a);
    F=res;
    res=1;
    longest(s,n,b);
    S=res;
    cout << F << " " << S << endl;
    for(int i=1;i<=F;++i)
        cout << f[i] << " ";
    cout << endl;
    for(int i=1;i<=S;++i)
        cout << s[i] << " ";
    cout << endl;
    for(int i=1;i<=n;++i)
        ans=max(2*min(a[f[i]],b[s[i]]) - 1,ans);
    cout << ans;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    solve();
    return 0;
}
    