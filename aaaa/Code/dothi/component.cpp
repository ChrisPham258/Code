/*
Cho đồ thị vô hướng G=(V, E) gồm n đỉnh và m cạnh. 
Ví dụ: 
n = 4, m = 2 
Cạnh 1: 1 -> 2 
Cạnh 2: 3 -> 4. 

Cho một tập gồm truy vấn Q, mỗi truy vấn gồm 2 số u[i], v[i]. 
Xác định xem u[i], v[i] trong đồ thị G có cùng vùng liên thông không? 

Ví dụ: 
Input: 
n = 4, m = 2, q = 4
1 2
3 4 

1 2 
4 3 
1 4
2 3

Output: 
YES 
YES
NO
NO */

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e9;

int n,m,q,cmp=1;
vector<int> G[101];
map<int,int> check;

void dfs(int u){
    check[u] = cmp;
    for(int i=0;i<G[u].size();++i){
        int v=G[u][i];
        if(check[v] == 0)
            dfs(v);
    }
}

void solve(){
    cin >> n >> m >> q;

    for(int i=0;i<m;++i){
        int u,v;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    for(int i=1;i<=n;++i){
        if(check[i] == 0){
            dfs(i);
            ++cmp;
        }
    }

    for(int i=0;i<q;++i){
        int x,y;
        cin >> x >> y;
        if(check[x] == check[y])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    solve();
    return 0;
}
    
