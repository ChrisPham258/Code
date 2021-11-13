#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=1e3;

int n,m,p,dem=1;
vector<int> G[nmx];
map<int,bool> vis;
bool check[nmx];
int trace[nmx];
vector<int> path;

void bfs(int s){
    queue<int> q;
    q.push(s);
    while(q.size()){
        int u=q.front();
        q.pop();
        for(int i=0;i<G[u].size();++i){
            if(!vis[G[u][i]] && check[G[u][i]]== 0){
                trace[G[u][i]]=u;
                vis[G[u][i]]=1;
                q.push(G[u][i]);
            }
        }
    }
}

void solve(int u,int v){
    if(!vis[v])
        cout << -1;
    else{
        path.push_back(v);
        while(v != u){
            ++dem;
            v=trace[v];
            path.push_back(v);
        }
        cout << dem << endl;
        for(int i=0;i<path.size();++i)
            cout << path[i] << " ";
    }
}
void solve(){
    cin >> n >> m >> p;
    for(int i=0;i<m;++i){
        int x,y;
        cin >> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    for(int i=0;i<p;++i){
        int u;
        cin >> u;
        check[u]=1;
    }
    bfs(1);
    solve(1,n);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    solve();
    return 0;
}
    