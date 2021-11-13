#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=2e5;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    int den,mau;
    cin >> den >> mau;
    mau-=1;
    den-=mau;
    if(den < 0){
        cout << "NO";
    }
    else{
        if(den%2 == 0)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}
    