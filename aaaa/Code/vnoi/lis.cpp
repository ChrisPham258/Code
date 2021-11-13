#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmx=1e5;

int n;
int dp[nmx],a[nmx],l[nmx];
int res=1,d,m,c;

void uk(){
    l[1]=1;
    for(int i=2;i<=100000;++i)
        l[i]=l[i-1]+i;
}
int main(){
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    
    int n;
    cin >> n;

    f1(i,1,n,1)
        cin >> a[i];
    uk();
    dp[1]=1;

    for(int i=2;i<=n;++i){
        d=0;
        c=res+1;
        while(d+1 != c){
            m =(d+c)/2;
            if(a[i] <= a[dp[m]] && l[i] <= l[dp[m]])
                c=m;
            else
                d=m;
        }
        dp[d+1]=i;
        if(d == res)
            ++res;
    }
    cout << res << endl;
    return 0;
}
    