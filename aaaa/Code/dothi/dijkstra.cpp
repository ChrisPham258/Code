#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=2e5;

int n,m;
vector<ii> G[nmx];
map<int,bool> vis;
int ans[nmx];

void dijkstra(){
    priority_queue<ii,vector<ii>,greater<ii>> pq;
    for(int i=1;i<=n;++i)
        ans[i]=INT_MAX;
    ans[1]=0;
    pq.push({0,1});

    while(!pq.empty()){
        int u=pq.top().second;
        int du=pq.top().first;
        pq.pop();
        if(du != ans[u])
            continue;
        
        for(int i=0;i<G[u].size();++i){
            int v=G[u][i].second;
            int uv=G[u][i].first;
            if(ans[v] > du + uv){
                ans[v] = du + uv;
                pq.push({ans[v],v});
            }
        }
    }
}

void solve(){
    cin >> n >> m;
    for(int i=1;i<n;++i){
        int x,y,z;
        cin >> x >> y >> z;
        G[x].push_back({z,y});
        G[y].push_back({z,x});
    }
    dijkstra();
    for(int i=0;i<m;++i){
        int u,v;
        cin >> u >> v;
        cout << ans[u]+ans[v] << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    solve();
    return 0;
}
    