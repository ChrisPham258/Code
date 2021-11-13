#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=1e3+5;

int n,m;
int p[nmx];
int ans=INT_MIN,cmp;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    cin >> n >> m;
    for(int i=0;i<m;++i)
        cin >> p[i];
    for(int i=0;i<m;++i){
        int s=0;
        int a=n;
        for(int j=0;j<m;++j){
            if(p[j] >= p[i])
                ++s,--a;
            if(a==0)
                break;
        }
        if(ans < s*p[i]){
            ans=s*p[i];
            cmp=p[i];
        }
    }
    cout << cmp << " " << ans;
    return 0;
}
    