#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=1e4;

int n,k;
int a[nmx];
int ans;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    cin >> n >> k;

    for(int i=0;i<n;++i)
        cin >> a[i];    
    sort(a,a+n,greater<int>());
    int i=0,j=0;
    while(a[i] != 0 || a[j]!=0){
        while(a[i]>=k && a[j]>=k){
            a[i]-=k;
            a[j]-=k;
            ++ans;
        }
        if(a[i] == 0){
            if(a[j] == 0)
                i+=2,j+=2;
            else
                ++i;
        }
        else{
            if(a[j] == 0)
                ++j;
            else
                i+=2,j+=2,++ans;
        }
    }
    cout << ans;
    return 0;
}
    