// #include<bits/stdc++.h>
// using namespace std;

// #define ll long long
// typedef pair<int, int> ii;

// const int nmx=2e5;

// ll ans,n,k;
// string bin(ll n){
//     string res="";
//     while(n!=0){
//         res+=char(n%2 +'0');
//         n/=2;
//     }
//     return res;
// }

// int main(){
//     ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
//     freopen("DEBUG.inp","r",stdin);
//     freopen("DEBUG.out","w",stdout);
//     cin >> n >> k;
//     int st=bin(n);
//     if(st <= k)
//         cout << 0;
//     else{
//         string st = bin(n);
//         ll so0=0;
//         for(int i=0;i<st.size();++i)
//             if(st[i] == '0')
//                 ++so0;

//         cout << ans;
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx = 50;

int dp[nmx][nmx], n, k, a[nmx];

int get (int n, int k) {
    return ((n >> (k - 1)) & 1);
}

int main () {
    // freopen("SO.INP","r",stdin);
    // freopen("SO.OUT","w",stdout);
    ios::sync_with_stdio (0);cin.tie (0);cout.tie (0);
    for (int i = 0; i <= 34; ++i)
        dp[0][i] = 1;
  
    for (int i = 1; i <= 34; ++i)
        for (int j = i; j <= 34; ++j)
            dp[i][j] = dp[i - 1][j - 1] + dp[i][j - 1];
  
    cin >> n >> k;
    int t = 0,d = 0,res = 0;
    
    if (k == 1)
	    ++res;
      
    for (int i = 32; i >= 1; --i){
        if (!get (n, i)){
            if (t)
		        d++;
            continue;
        }
        a[i] = 1;
        if (t == 0)
            t = i;
    }
    int dem = 0; 
    for (int i = t - 1; i >= 1; --i){
        if (a[i] == 0){
	        ++dem;
	        continue;
        }
    	int cmp = k - dem - 1;
    	if (cmp > i - 1 || cmp < 0)
    	    continue;
    	 res += dp[cmp][i - 1];
    }
    if (k == d)
	    ++res;
      
    for (int i = t - 1; i >= k + 1; --i){
        if (k > i - 1)
	        continue;
        res += dp[k][i - 1];
    }
    cout << res << endl;
    
return 0;

}
