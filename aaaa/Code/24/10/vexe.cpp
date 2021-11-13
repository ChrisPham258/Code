#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e9;
bool check[30000];
int main(){
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    int n,m,k;
    cin >> n >> m >> k;
    int dau[m],duoi[m],tien[m];

    f(i,0,m,1)
        cin >> dau[i] >> duoi[i] >> tien[i];

    while(1){
        int a = find(dau.begin(),dau.end(),1);
        if(a != dau.end() && check[a] != 1)
            check[a] = 1;
        int b = find(duoi.begin(),duoi.end(),1);
        if(b != duoi.end() && check[b] != 1)
            check[b] = 1;
        
    }
    return 0;
}
    