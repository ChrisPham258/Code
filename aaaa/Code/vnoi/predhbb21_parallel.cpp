#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=2e5;
set<int> x;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    // int t;
    // cin >> t;
    while(1){
        int s=0;
        int a[12];
        for(int i=0;i<12;++i){
            cin >> a[i];
            s+=a[i];
            x.insert(a[i]);
        }
        if(s == 0)
            break;
        else{
            if(x.size() <= 3)
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
        x=set<int>();
    }
    return 0;
}
    