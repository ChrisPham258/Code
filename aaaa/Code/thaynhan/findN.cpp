#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmx=2e5;

int a[1001];
void mayman(){
    a[1]=4;
    a[2]=7;
    for(int i=2;i<=1000;++i){
        if(i%2 == 0)
            a[i]=a[i/2-1]*10+7;
        else
            a[i]=a[i/2]*10+4;
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    mayman();
    int t;
    cin >> t;
    while(t!=0){
        int k;
        cin >> k;
        cout << a[k] << endl;
        --t;
    }
    return 0;
}
    