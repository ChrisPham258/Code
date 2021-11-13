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
    int n;
    cin >> n;
    int a[n];

    f(i,0,n,1)
        cin >> a[i];

    sort(a+0,a+0+n);

    int i=0,j=n-1,r=0,s1=0,s2=0;
    while(i<j){
        if(r%2 == 0)    
            s1+=a[i]+a[j];
        else
            s2+=a[i]+a[j];
        ++i;
        --j;
        ++r;
    }
    cout << abs(s1-s2);
    return 0;
}
    