#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e9;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    int t;
    cin >> t;
    while(t!=0){
        int T,q,l,anst=0,ansq=0;
        cin >> T >> q >> l;
        if(T%l == 0){
            --T;++anst;
        }
        else if(q%l == 0){
            --q;++ansq;
        }
        else
            --l;
        while(1){
            if(T%l == 0){
                --T;++anst;
            }
            else{
                if(q%l == 0){
                    --q;++ansq;
                }
                else
                    --l;
            }
            if(l == 1)
                break;
        }
        cout << anst << " " << ansq << endl;      
        --t;
    }
    return 0;
}
    