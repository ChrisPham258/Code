#include<bits/stdc++.h>
using namespace std;

#define ll long long

const int nmx=1e5 + 1;

int n,m;
vector<int> G[nmx];
unordered_map<int,bool> vis;
vector<int> a;
int ans=-1;
// map  -> Heap tree -> vis[u] = {} -> O(logn)
// unordered_map 

void dfs(int u){
    vis[u] = 1;
    for(auto v : G[u])
        if(!vis[v])
            dfs(v);
}

void solve(){
    cin >> n >> m; 
    for(int i = 1; i <= m; ++i) 
    { 
        long long u, v; 
        cin >> u >> v; 
        G[u].push_back(v); 
        G[v].push_back(u); 
    }
     
    for(int i=1;i<=n;++i){
        if(!vis[i]){
            dfs(i); 
            ++ans;
            a.push_back(i);
        }
    }
    cout << ans << endl;
    for(int i=0;i<a.size() - 1; ++i)
        cout << a[i] << " " << a[i+1] << endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    solve();
    return 0;
}
    