#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e5;

int n,m,ans;
vector<int> G[nmax];
map<int,bool> check;

void dfs(int u){ 
    check[u] = 1;

    for(int i=0;i<G[u].size();++i){
        int v = G[u][i];
        if(check[v] == 0){
            dfs(v);
        } 
    }
}

void solve(){
    cin >> n >> m;

    f(i,0,m,1){
        int u,v;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
     
    f1(i,1,n,1)
    {
        if (check[i] == 0)
        {
            dfs(i);
            ans += 1;
        }
    }
    cout << ans;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    solve();
    return 0;
}
    