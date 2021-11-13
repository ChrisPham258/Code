#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define F first
#define S second
typedef pair<int, int> ii;

const int nmx=1e5;

int n,m,ans;
vector<ii> a;
bool cmp(ii a, ii b){
    return a.F < b.F;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("RAU.INP","r",stdin);
    freopen("RAU.OUT","w",stdout);
    cin >> n >> m;

    for(int i=0;i<m;++i){
        int x,y;
        cin >> x >> y;
        a.push_back({x,y});
    }
    sort(a.begin(),a.end(),cmp);

    int j=0;
    while(n!=0){
        if(n >= a[j].S){
            n-=a[j].S;
            ans+=a[j].F*a[j].S;
        }
        else{
            ans+=n*a[j].F;
            break;
        }
        ++j;
    }
    cout << ans;
    return 0;
}
    