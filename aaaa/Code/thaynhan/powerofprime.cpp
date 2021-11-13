#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e9;

int lt(int a,int b){
    int ans=0;
    while(a%b == 0){
        ++ans;
        a/=b;
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    int t;
    cin >> t;
    while(t!=0){
        int n,p;
        cin >> n >> p;
        int ans=0;
       f1(i,1,n,1){
           if(i%p == 0)
                ans+=lt(i,p);
       }
       cout << ans << endl;
        --t;
    }
    return 0;
}
    