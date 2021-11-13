/*
Cho đồ thị vô hướng liên thông G=(V, E). Gồm n đỉnh và n - 1 cạnh. 
=> Cây 

Tìm đường kính của cây. Chú thích: 
Đường kính của cây được định nghĩa là 2 đỉnh u, v thuộc cây G cách nhau xa nhất. 

Ví dụ: 
7
1 2
2 3
4 5
2 5
6 5
6 7

Output: 
4 (số cạnh thuộc đường đi từ u đến v -> (7->1) hoặc (7, 3))

Constrains: 
n <= 5*10^5
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmx=1e5;

int n,m,ans=INT_MIN,MAX=-99999;
vector<int> G[200005];
map<int,bool> vis;
int trace[nmx];
vector<int> vec;
int lens=0;

// void dfs(int u, int d){
//     vis[u] = 1;
//     lens=max(lens,d);
//     for(int v : G[u]){
//         if(!vis[v]){
//             trace[v]=u;
//             dfs(v,d+1);
//         }
//     }
// }

void bfs(int s){
    queue<int> q;
    q.push(s);
    vis[s]=1;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int v : G[u]){
            if(!vis[v]){
                trace[v]=u;
                q.push(v);
                vis[v]=1;
            }
        }
    }
}
void path(int u, int v){
    if(!vis[v]){
        cout << -1;
        return;
    }
    else{
        while(v!=u){
            vec.push_back(v);
            v=trace[v];
        }
        vec.push_back(v);
        for(int i=0;i<vec.size();++i)
            cout << vec[i];
    }
}
void solve(){
    cin >> n >> m;

    for(int i=0;i<m;++i){
        int x,y;
        cin >> x >> y;
        G[x].push_back(y);
    }
    cout << endl;
    // for(int i=1;i<=n;++i){
    //     dfs(i,0);
    //     // ans=max(ans,trace);
    //     cout << i << " " << trace << endl;
    //     trace=0;
    //     vis=map<int,bool>();
    // }
    bfs(1);
    path(1,4);
    
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    solve();
    return 0;
}
