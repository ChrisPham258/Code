#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=6e3 + 5;

int n;
int a[nmx];
int ans;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    cin >> n;

    for(int i=0;i<n;++i)
        cin >> a[i];

    for(int i=0;i<n-1;++i)
        for(int j=i+1;j<n;++j)
            if(a[i] > a[j])
                ++ans;

    cout << ans;
    return 0;
}
    