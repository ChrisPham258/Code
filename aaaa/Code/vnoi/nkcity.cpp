#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=1e5+1;

vector<ii> a[nmx];
int n,m;
int d[nmx];

void dijkstra(){
    priority_queue<ii,vector<ii>,greater<ii>> pq;
    for(int i=1; i <= n; ++i)
        d[i]=INT_MAX;
    d[1]=0;
    pq.push({0,1});

    while(pq.size())
    {
        int u=pq.top().second;
        int du=pq.top().first;
        pq.pop();
        if(du != d[u])
            continue;
        
        for(int i=0; i<a[u].size(); ++i){
            int v=a[u][i].second;
            int uv=a[u][i].first;
            if(d[v] > du + uv){
                d[v]=du+uv;
                pq.push({d[v],v});
            }
        }
    }
}

void solve(){
    cin >> n >> m;
    for(int i=0;i<m;++i){
        int u,v,t;
        cin >> u >> v >> t;
        a[u].push_back({t,v});
        a[v].push_back({t,u});
    }
    dijkstra();
    cout << d[n];
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    solve();
    return 0;
}
    