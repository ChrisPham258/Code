#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)

const int nmax=1e7;

bool table[nmax];
void snt(){
	table[1]=1;
	f1(i,2,sqrt(nmax),1){
		if(table[i] == 0){
			ll j=i*i;
			while(j<=nmax){
				table[j]=1;
				j+=i;
			}
		}
	}
}
int main(){
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    ll maxx=0;
    ll a=600851475143;
    snt();
    f1(i,1,sqrt(a),1)
        if(table[i] == 0 &&  a % i == 0)
            maxx = i;
    cout << maxx;
    return 0;
}
    