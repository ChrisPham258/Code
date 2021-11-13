#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=1e3+1;

int n,m;
string st[nmx];
bool vis[nmx][nmx];

bool check(int i,int j){
    if(i>n-1 || i<0 || j>m-1 || j<0)
        return 0;
    if(st[i][j] == '#')
        return 0;
    if(vis[i][j] == 1)
        return 0;
    return 1;
}

void dfs(int i,int j){
    vis[i][j]=1;
    if(check(i-1,j))
        dfs(i-1,j);
    if(check(i,j-1))
        dfs(i,j-1);
    if(check(i+1,j))
        dfs(i+1,j);
    if(check(i,j+1))
        dfs(i,j+1);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    cin >> n >> m;
    for(int i=0;i<n;++i)
        cin >> st[i];
    int ans=0;

    for(int i=0;i<n;++i)
        for(int j=0;j<m;++j)
            if(vis[i][j] == 0 && st[i][j] == '.'){
                dfs(i,j);
                ++ans;
        }
    cout << ans;
    return 0;
}
    