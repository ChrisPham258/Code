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
    int x,y,n;
    cin >> x >> y >> n;

    for(int i=1;i<=n;++i){
        if(i % x == 0 && i % y != 0)
            cout << "Fizz" << endl;
        else if(i % y == 0 && i % x != 0)
            cout << "Buzz" << endl;
        else if(i % y == 0 && i % x == 0)
            cout << "FizzBuzz" << endl;
        else
            cout << i << endl;
    }
    return 0;
}
    