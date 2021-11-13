#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=1e2+5;

int n;
int a[nmx][nmx];
vector<int> ans;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    cin >> n;
    for(int i=0;i<n;++i)
        for(int j=0;j<n;++j)
            cin >> a[i][j];

    for(int i=0;i<n;++i)
        for(int j=i;j<=i;++j){
            int x=sqrt(a[i][j]);
            ans.push_back(x);
        }    
    for(int i=0;i<ans.size();++i)
        cout << ans[i] << " ";
    return 0;
}
    