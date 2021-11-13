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
    string st;
    cin >> st;

    int l=0,r=st.size();
    int mid=(l+r)/2;
    while(r>=l){
        if(st[mid] == '0')
            l=mid+1;
        else
            r=mid-1;
        mid=(l+r)/2;
    }
    cout << mid+1;
    return 0;
}
    