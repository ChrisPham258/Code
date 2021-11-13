#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=1e4;

int n,a[nmx];

bool check(int x){
    for(int i=0;i<n-1;++i)
        for(int j=i+1;j<n;++j)
                if(a[i] + x > a[j])
                    return 0;
    return 1;
}

void bs(int l,int r){
    int mid=(l+r)/2;
    while(mid != l && mid != r){
        if(check(mid) == 0)
            r=mid;
        else
            l=mid;
        mid=(l+r)/2;
        cout << mid << " ";
    }
}
void solve(){
    cin >> n;
    for(int i=0;i<n;++i)
        cin >> a[i];
    sort(a,a+n);
    bs(1,1e9);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    solve();
    return 0;
}
    