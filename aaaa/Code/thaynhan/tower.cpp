#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e9;

bool check(ll n){
    while(n!=0){
        int a=n%10;
        if(a == 8)
            return 1;
        n/=10;
    }
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
          ll n,a;
          cin >> n;
          if(n >= 0){
            a=n;
            ++n;
            while(check(n) != 1){
                ++n;
            }
          }
          else{
              if(n>=-7){
                  cout << 8-n;
                  return 0;
              }
              else{
                  n=abs(n);
                a=n;
                --n;
                while(check(n) != 1)
                    --n;
              }
          }
          cout << abs(n-a);
    return 0;
}
    