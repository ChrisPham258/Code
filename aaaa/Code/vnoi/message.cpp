#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=1e4;

vector<int> G[nmx];
map<int,bool> vis;
int n,m,ans;

void bfs(int s){
    queue<int> q;
    q.push(s);
    vis[s]=1;

    while(q.size()){
        int u=q.front();
        q.pop();
        for(int v : G[u]){
            if(!vis[v]){
                vis[v]=1;
                q.push(v);
            }
        }
    }
}

void solve(){
    cin >> n >> m;
    for(int i=0;i<m;++i){
        int u,v;
        cin >> u >> v;
        G[u].push_back(v);
    }

    for(int i=1;i<=n;++i)
        if(!vis[i]){
            bfs(i);
            ++ans;
        }
    cout << ans-1;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    solve();
    return 0;
}
    