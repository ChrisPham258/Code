#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmx=2e5;

int n;
int a[nmx];
set<int> kq;
bool cmp(int a, int b){
    return a > b;
}

int sum(int x){
    int sum=0;
    for(int i=1;i<=n;++i){
        if(i != x && i != x-2 && i != x-1)
            sum+=a[i];
    }
    return sum;
}

int tong(int x){
    return a[x] + a[x-1] + a[x-2];
}

void solve(){
    cin >> n;
    for(int i=1;i<=n;++i)
        cin >> a[i];
    sort(a+1,a+1+n,cmp);
    for(int i=3;i<=n;++i){
        if(tong(i) <= sum(i)){
            kq.insert(i);
            kq.insert(i-1);
            kq.insert(i-2);
        }
    }
    cout << kq.size();
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("BUYT.INP","r",stdin);
    freopen("BUYT.OUT","w",stdout);
    solve();
    return 0;
}
    