#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmx=1e4+5;

int a[nmx];

bool check(int n){
    int s=0;
    while(n!=0){
        s+=n%10;
        n/=10;
        if(s>10)
            return 0;
    }
    return s == 10;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    int n,k=18;
    cin >> n;
    while(n != 0){
        if(check(k) == 1)
            --n;
        ++k;
    }
    cout << k-1;
    return 0;
}