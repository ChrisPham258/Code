#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=2e5;

int n,k,ans=INT_MIN;

int so(int n,int k){
    if(n-k <= 1 || (n+k)%2) 
        return 1;
    return so((n+k)/2,k)+so((n-k)/2,k);
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    cin >> n >> k;
    cout << so(n,k);
    return 0;
}
    