#include<bits/stdc++.h>
using namespace std;

string st,s;
int ans,res=INT_MIN;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cin.tie(0);
    cin >> st >> s;
    ans+=st.size()+s.size();
    int i=0;
    while(i!=st.size()){
        if(st[i] == s[0]){
            int a=i;
            int x=0;
            for(int j=0;j<s.size();++j)
                if(s[j] == st[a])
                    ++x,++a;
            res=max(res,x);
        }
        ++i;
    }
    cout << ans-res;
}