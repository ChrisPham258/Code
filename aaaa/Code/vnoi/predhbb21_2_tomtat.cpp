#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e9;


int main(){
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    int t;
    cin >> t;
    while(t!=0){
        int table[1000];

        for(int i=0;i<1000;++i)
            table[i+1] = 0;

        int a[6];
        bool kq=0;

        for(int i=0;i<6;++i){
            cin >> a[i];
            table[a[i]] += 1;
        }

        for(int i=0;i<1000;++i){
            if(table[i+1] != 0)
                if(table[i+1] %3 == 0)
                    kq=1;
        }

        if(kq == false)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;  
      
        --t;
    }
    return 0;
}
    