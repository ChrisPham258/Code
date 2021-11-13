#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=1e3;

int n,m,k;
vector<ii> G[nmx];
int truoc[nmx];
int d[nmx];
void dijkstra(int s){
    priority_queue<ii,vector<ii>,greater<ii>> pq;
    for(int i=1;i<=n;++i)
        d[i]=INT_MAX;
    d[1]=0;truoc[s]=s;
    pq.push({0,s});

    while(pq.size()){
        int u=pq.top().second;
        int du=pq.top().first;
        pq.pop();

        if(du != d[u])
            continue;
        
        for(int i=0;i<G[u].size();++i){
            int v=G[u][i].second;
            int dv=G[u][i].first;

            if(d[v] > du+dv){
                truoc[v]=u;
                d[v]=du+dv;
                pq.push({d[v],v});
            }
        }
    }
}

void so(int u,int v){
    vector<int>path;
    while(v!=u){
        path.push_back(v);
        v=truoc[v];
    }
    path.push_back(v);
    reverse(path.begin(),path.end());
    int lens=path.size();
    cout << lens << " ";
    for(int i=0;i<lens;++i)
        cout << path[i] << " ";
    cout << endl;
}
void solve(){
    cin >> n >> m >> k;
    for(int i=0;i<m;++i){
        int u,v,c;
        cin >> u >> v >> c;
        G[v].push_back({c,u});
        G[u].push_back({c,v});
    }

    for(int i=0;i<k;++i){
        int x,a,b;
        cin >> x >> a >> b;
        dijkstra(a);
        if(x == 0)
            cout << d[b] << endl;
        else
            so(a,b);
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    solve();
    return 0;
}
    