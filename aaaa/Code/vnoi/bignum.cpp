#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> ii;

const int nmx=2e5;

string cong(string a,string b){
    if(b.size()<a.size())
        swap(a,b);
    while(a.size() < b.size())
        a='0'+a;
    string res="";
    int cmp=0;
    for(int i=a.size()-1;i>=0;--i){
        int x=a[i]-'0';
        int y=b[i]-'0';
        res=char((x+y+cmp)%10 + '0')+res;
        cmp=(x+y)/10;
    }
    if(cmp == 1)
        res='1'+res;
    return res;
}

string tru(string a,string b){
    if(b.size()<a.size())
        swap(a,b);
    while(a.size() < b.size())
        a='0'+a;
    string res="";
    int cmp=0;
    for(int i=a.size()-1;i>=0;--i){
        int x=a[i]-'0';
        int y=b[i]-'0';
        if(x<y){
            x+=10;
            cmp+=1;
        }
        res=char((x-y)%10 + '0')+res;

    }
    if(cmp == 1)
        res='1'+res;
    return res;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    string a,b;
    cin >> a >> b;
    cout << cong(a,b);
    return 0;
}
 