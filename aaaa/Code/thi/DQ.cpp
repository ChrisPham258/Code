#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmx=1e4+1;

ll n,ans=INT_MIN;
vector<pair<pair<ll,ll>,ll>> a;
ll dp[nmx];
bool cmp(pair<pair<ll,ll>,ll> a, pair<pair<ll,ll>,ll> b){
    return a.first.second < b.first.second;
}

void solve(){
    cin >> n;
    for(int i=0;i<n;++i){
        ll x,y,z;
        cin >> x >> y >> z;
        a.push_back({{x,y},z});
    }
    sort(a.begin(),a.end(),cmp);

    for(int i=0;i<n;++i){
        ll sum=a[i].second;
        ll cmp = a[i].first.second;
        for(int j=0;j<n;++j){
            if(j != i){
                if(a[j].first.first >= cmp){
                    sum+=a[j].second;
                    cmp=a[j].first.second;
                }
            }
        }
        ans=max(ans,sum);
    }
    cout << ans;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("DQ.INP","r",stdin);
    freopen("DQ.OUT","w",stdout);
    solve();
    return 0;
}



#include <bits/stdc++.h>

using namespace std;

const int N=1e4+1;
int a[N],b[N],c[N];
map<int,map<int,int>>vt;
map<int,int>dp;
map<int,int>k;
void Cach2()
{
    int n,maxn=-1;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>a[i]>>b[i]>>c[i];
        maxn=max(maxn,b[i]);
        vt[b[i]][k[b[i]]++]=i;
    }
    for(int i=1;i<=maxn;++i)
    {
        for(int j=0;j<k[i];++j)
            dp[i]=max(dp[i],dp[a[vt[i][j]]]+c[vt[i][j]]);
        dp[i]=max(dp[i],dp[i-1]);
    }
    cout<<dp[maxn];
}
int main()
{
    //freopen("DQ.INP","r",stdin);
    //freopen("DQ.OUT","w",stdout);
    Cach2();
    return 0;
}

    