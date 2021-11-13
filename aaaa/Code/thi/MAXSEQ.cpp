#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=1e5+5;

bool check(int a){
    int k=sqrt(2*a);
    return k*(k+1) / 2 == a;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("MAXSEQ.INP","r",stdin);
    freopen("MAXSEQ.OUT","w",stdout);
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i=0;i<n;++i)
        cin >> a[i];
    
    int res=0,ans=0;

    for(int i=0;i<n;++i){
        if(check(a[i])){
            if(a[i] >= a[i-1] && i>0)
                res+=1;
            else
                res=1;
            ans=max(ans,res);
        }
        else
            res=0;
    }
    cout << ans;
    return 0;
}
    