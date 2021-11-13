#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=2e5;

int n;
ll s;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    cin >> n;
    for(int i=0;i<n;++i){
        int a;
        cin >> a;
        if((i+1) % 2 == 0)
            s+=a;
    }    
    cout << s;
    return 0;
}
    