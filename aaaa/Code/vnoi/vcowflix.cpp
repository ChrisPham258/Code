// #include<bits/stdc++.h>
// using namespace std;

// #define ll long long
// typedef pair<int, int> ii;

// const int nmx=101;

// int C,n;
// int a[nmx];
// int dp[nmx];

// int main(){
//     ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
//     // freopen("DEBUG.inp","r",stdin);
//     // freopen("DEBUG.out","w",stdout);
//     cin >> C >> n;
//     for(int i=0;i<n;++i)
//         cin >> a[i];
    
//     dp[0]=0;
//     for(int i=1;i<n;++i){
//         for(int j=0;j<i-1;++j)
//             if()
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=2e5;

bool f[nmx];
int C,n;
int w[nmx];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    cin >> C >> n;
    for(int i=0;i<n;++i)
        cin >> w[i];
    
    f[0]=1;
    for(int i=0;i<n;++i)
        for(int j=C;j>=w[i];--j){
            f[j]=f[j] or (f[j-w[i]]);
        }
    
    for(int i=C;i>=0;--i)
        if(f[i]){
            cout << i;
            return 0;
        }
    return 0;
}
     