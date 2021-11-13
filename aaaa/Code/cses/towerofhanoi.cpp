#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmx=2e5;

int n;

void tower(int n,char a,char b,char c){
    if(n == 1)
        return;
    else{// A B C
        tower(n-1,c,b,a); 
        cout << c << " -> " << a << endl;
        tower(n-1,a,b,c);
        cout << b << " -> " << a << endl;
        tower(n-1,b,c,a);
        cout << a << " -> " << c << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    cin >> n;
    char a,b,c;
    cin >> a >> b >> c;
    tower(n,a,b,c);
    return 0;
}
    