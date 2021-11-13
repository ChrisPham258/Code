#include <bits/stdc++.h>
using namespace std;
int n,k,a[3005],c[3005],dp[3005][105];
int main()
{
    freopen("DRONE.INP","r",stdin);
    freopen("DRONE.OUT","w",stdout);
    ios_base::sync_with_stdio(false);    cin.tie(0);    cout.tie(0);

    cin>>n>>k;
    for (int i=1; i<=n; i++)
        cin>>c[i];

    for (int i=1; i<=n; i++)
        cin>>a[i];

    for (int i=0; i<=n; i++)
        for (int j=0; j<=k; j++)
        {
            dp[i][j]=-1;
        }
    dp[1][0]=c[1];

    for (int i=1; i<=n; i++)
        for (int j=0; j<=k-1; j++)

            if (dp[i][j]!=-1)
            {
                for (int o=1; o<=a[i] && (i+o)<=n; o++)
                    dp[i+o][j+1]=max(dp[i+o][j+1],dp[i][j]+c[i+o]);
            }
    int ans=-1;
    for (int i=1; i<=k; i++)
        ans=max(ans,dp[n][i]);
    cout<<ans;

}

/*

6
3 1 4 2 2 2
2 3 1 1 3 1

*/
