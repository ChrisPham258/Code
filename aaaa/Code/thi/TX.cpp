#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ff first
#define ss second
typedef pair<int, int> ii;

const int nmx=1e5;

int n,ans;
vector<ii> a;
vector<int> cur;
map<int,bool> vis;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("TX.inp","r",stdin);
    freopen("TX.out","w",stdout);
    cin >> n;
    int k=n/2;
    for(int i=0;i<n;++i){
        int x,y;
        cin >> x >> y;
        a.push_back({x,y});
    }

    for(int i=n-2;i>=0;--i){
        if(k != 0){
            int res=a[i].ff-a[i].ss;
            int cmp=i;
            for(int j=0;j<i;++j){
                int tmp = a[j].ff-a[j].ss;
                if(res < tmp){
                    res=tmp;
                    cmp=j;
                }
            }
            cur.push_back(cmp);
            --k;
        }
        else break;
    }
    
    for(int i=0;i<cur.size();++i){
        vis[cur[i]]=1;
        ans+=a[cur[i]].ss;
    }
    for(int i=0;i<n;++i)
        if(!vis[i])
            ans+=a[i].ff;
    
    cout << ans;
    return 0;
}
    