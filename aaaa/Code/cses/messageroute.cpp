#include<bits/stdc++.h>
using namespace std;

#define ll int

const int nmx=1e5+1;

ll n,m; 
vector<ll> G[nmx]; 
ll a[nmx];
unordered_map<ll,bool> vis;
queue<ll> q;

void bfs(ll s){
    q.push(s);
    vis[s]=1;

    for(int i = 0 ; i < nmx; ++i) 
        a[i] = - 1; 

    while(!q.empty()){
        ll u = q.front(); 
        for(auto v : G[u]){
            if(!vis[v]){
                // a[u]=v; 
                a[v] = u; 
                q.push(v);
                vis[v]=1;
            }
        }
        q.pop();
    }
}

void trace(ll u, ll v){
    vector<ll> path = vector<ll>();
    if(!vis[v])
        cout << "IMPOSSIBLE";
    else{
        
        while(v != -1) 
        { 
            path.push_back(v); 
            v = a[v]; 
        }
        reverse(path.begin(),path.end());
        cout << path.size() << endl;
        for(int i=0;i<path.size();++i)
            cout << path[i] << " ";
    }
}

// void solution(long long s, long long f) // calculate the minimum cost from s to f using bfs. 
// { 
//     queue<long long> que; 
//     unordered_map<long long, int> flag; 
//     vector<long long> trace(n, -1); 
//     vector<long long> result; 
    
//     que.push(s); 
//     flag[s] = 1;  
//     while(que.empty() == false) 
//     { 
//         int u = que.front();  
//         for(auto v: G[u])
//             if (++flag[v] == 1) 
//             { 
//                 que.push(v); 
//                 trace[v] = u; 
//             }
//         que.pop();
//     }
//     result.push_back(f); 
//     while(trace[f] != -1) 
//     { 
//         result.push_back(trace[f]); 
//         f = trace[f]; 
//     }
//     reverse(result.begin(),result.end());
//     if(result[0] == 0)
//         cout << "IMPOSSIBLE";
//     else{
//     cout << result.size() << endl;
//     for(auto node : result) 
//         cout << node << " "; 
//     }
// }

void solve(){
    cin >> n >> m; 
    for(int i =1 ;i <= m; ++i) 
    { 
        ll u, v; 
        cin >> u >> v; 
        G[u].push_back(v); 
        G[v].push_back(u);
    }
    // solution(1,n);
    // cout <<"vc"; 
    bfs(1);
    trace(1,n);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    solve();
    return 0;
}
    