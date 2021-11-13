#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=2e5;

vector<int> G[nmx];
map<int,bool> vis;
int n,m,ans;

void dfs(int u){
    vis[u]=1;
    for(int v : G[u]){
        if(!vis[v])
            dfs(v);
    }
}

void solve(){  
    cin >> n >> m;
    for(int i=0;i<m;++i){
        int a,b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    for(int i=1;i<=n;++i){
        if(!vis[i]){
            dfs(i);
            ++ans;
        }
    }
    cout << m-n+ans;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    solve();
    return 0;
}
    