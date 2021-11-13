#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=2e5,M=1e9+7;

vector<ii> G[nmx];
int d[nmx];
int n,q;

void dijkstra(int x){
    priority_queue<ii,vector<ii>,greater<ii>> qu;
    
    for(int i=1;i<=n;++i)
        d[i]=M;
    d[x]=0;
    qu.push({0,x});
    while(qu.size()){
        int u=qu.top().second;
        int du=qu.top().first;
        qu.pop();
        if(du != d[u])
            continue;
        
        for(int i=0;i<G[u].size();++i){
            int v = G[u][i].second;
            int dv= G[u][i].first;

            if(d[v] > du+dv){
                d[v]=du+dv;
                qu.push({d[v],v});
            }
        }
    }
}
void solve(){
    cin >> n >> q;
    int m=n-1;
    for(int i=0;i<m;++i){
        int a,b,c;
        cin >> a >> b >> c;
        G[a].push_back({c,b});
        G[b].push_back({c,a});
    }

    for(int i=0;i<q;++i){
        int a,b;
        cin >> a >> b;
        dijkstra(a);
        cout << d[b] << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    solve();
    return 0;
}
    