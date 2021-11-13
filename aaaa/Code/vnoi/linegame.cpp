#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=2e5;

int n,ans=INT_MIN,s;
int a[nmx];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    cin >> n;
    for(int i=0;i<n;++i)
        cin >> a[i];
    sort(a,a+n);

    for(int i=0;i<n;++i)
        cout <<  a[i] << " ";
    cout << endl;
    int i=0,j=n-2;
    s=a[n-1];
    ans=max(s,ans);
    while(i<j){
        s+=a[j]-a[i];
        ans=max(s,ans);
        ++i,--j;
    }
    cout << ans;
    return 0;
}
    