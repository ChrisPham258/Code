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
    int ans[5]={0,0,0,0,0};
    int a[5][4],maxx=0;
    
    f1(i,0,4,1){
        f1(j,0,3,1){
            cin >> a[i][j];
            ans[i]+=a[i][j];
        }
        maxx=max(maxx,ans[i]);
    }

    f1(i,0,4,1)
        if(ans[i] == maxx){
            cout << i+1;
            break;
        }
    cout << " " << maxx;
    return 0;
}
    