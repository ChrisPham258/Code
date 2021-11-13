#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000000000000000
const int nmx=2e5;

string st;
int cmp=1;
string cong(int n){
    string s="";
    while(n!=0){
        s=char(n%10 +'0')+s;
        n/=10;
    }
    return s;
}

void solut(){
    int n=0;
    while(n <= M){
        st+=cong(cmp);
        ++cmp;
        n=st.size();
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    // freopen("DEBUG.inp","r",stdin);
    // freopen("DEBUG.out","w",stdout);
    solut();
    int t;
    cin >> t;
    while(t!=0){
        int k;
        cin >> k;
        cout << st[k-1] << endl;      
        --t;
    }
    return 0;
}

        