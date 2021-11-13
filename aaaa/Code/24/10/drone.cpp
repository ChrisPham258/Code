#include<bits/stdc++.h>
using namespace std;

int n, a[3005], b[3005], K, f[3005][105];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    freopen("DEBUG.inp", "r", stdin);
    freopen("DEBUG.out", "w", stdout);
    cin >> n >> K;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];

    for (int i = 0; i <= n; i++)
    {
        for (int k = 0; k <= K; k++)
        {
            f[i][k] = -1e9;
        }
    }
    f[1][0] = a[1];
    for (int i = 2; i <= n; i++)
    {
        for (int k = 1; k <= K; k++)
        {
            for (int j = i - 1; j >= i - 50 && j >= 1; j--)
            {
                if (j + b[j] >= i) 
                    f[i][k] = max(f[i][k], f[j][k - 1] + a[i]);
            }
        }
    }

    // int res = -1;
    // for (int k = 0; k <= K; k++) 
    //     res = max(res, f[n][k]);
    // if (res < 0) res = -1;
    // cout << res;

    return 0;
}
/*
6 3
3 1 4 2 2 2
2 3 1 1 3 1
*/




