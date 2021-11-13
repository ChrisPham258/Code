#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)
#define ii pair<int,int>
const int nmax=1e9;

int n,m,q,ans;
int a[1001],b[1001],l[1001];

vector<ii> G[1001];
map<int,bool> vis;
stack<int> S;
int x;

// void dfss(int u){
//     vis[u]=1;
//     duong.push_back(u);
//     for(int v : G[u]){
//         if(!vis[v]){
//             dfs(v);
//         }
//     }
// }

void dfs(int u){
    S.push(u);
    while(!S.empty()){
        int x = S.top();
        vis[x] = 1;
        S.pop();
        for(int v : G[x]){
            if(!vis[v])
                S.push(v);
        }
    }
}

void solve(){
    cin >> n >> m;

    for(int i=0;i<m;++i){
        cin >> a >> b >> l;
        G[a].push_back(b,l);
        G[b].push_back(a,l);
    }

    for(int i=1;i<=n;++i)
        if(!vis[i]){
            dfs(i);
            ++ans;
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
    