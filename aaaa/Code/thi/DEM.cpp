#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=2e5;

int n;
int a[nmx];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("DEM.INP","r",stdin);
    freopen("DEM.OUT","w",stdout);
    int n;
    cin >> n;
    for(int i=1;i<=n;++i){
        a[i]=a[i-1]+i;
    }
    for(int i=0;i<n;++i)
        for(int j=i+1;j<=n;++j)
            if(a[j]-a[i] == n){
                cout << j-i;
                return 0;
            }
    return 0;
}
    