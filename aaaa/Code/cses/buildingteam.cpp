#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=2e5;

int n,m;
vector<int> G[nmx];
map<int,bool> vis;
int cmp=1;
vector<int>a;
vector<int>b;

void bfs(int s){
    queue<int> q;
    q.push(s);
    vis[s]=1;

    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int v : G[u]){
            if(vis[v] == 0){
                vis[v]=1;
                q.push(v);
            }
        }
    }
}

void solve(){
    cin >> n >> m;
    for(int i=0;i<m;++i){
        int x,y;
        cin >> x >> y;
        G[x].push_back(y);
    }

    for(int i=1;i<=n;++i){
        if(vis[i] == 0){
            bfs(i);
            ++cmp;
        }
    }
    cout << cmp;
    if(cmp == 2)
        cout << "IMPOSSIBLE";
    else{


    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    solve();
    return 0;
}
    