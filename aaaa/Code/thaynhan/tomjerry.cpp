#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=2e5;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    int t;
    cin >> t;
    while(t!=0){
        int n;
        cin >> n;
        if(n %2 == 0)
            cout << 1 << endl;
        else
            cout << 0 << endl;      
        --t;
    }
    return 0;
}
    