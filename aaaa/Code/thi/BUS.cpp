#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f first
#define s second
typedef pair<int, int> ii;

const int nmx=2e5;

int n,m,t;
vector<ii> a;
vector<int> G[nmx];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    cin >> n >> m;
    for(int i=0;i<n;++i){
        int T,k;
        cin >> T >> k;
        t+=T;
        for(int j=0;j<k;++j){
            int h;
            cin >> h;
            G[i].push_back(h);
        }
        a.push_back({2*t,k});        
    }

    int j=0,ans=0;
    while(m != 0){
        if(m - a[j].s >= 0){
            ans+=a[j].f;
            sort(G[j].begin(),G[j].end());
            int u=G[j].size();
            ans+=G[j][u-1];
            m-=a[j].s;
        }
        else{
            ans+=a[j].f;
            sort(G[j].begin(),G[j].end());
            ans+=G[j][m-1];
            break;
        }
        ++j;
    }
    cout << ans;
    return 0;
}
    