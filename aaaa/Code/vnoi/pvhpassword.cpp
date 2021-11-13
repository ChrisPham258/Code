    #include<bits/stdc++.h>
    using namespace std;

    #define ll long long
    typedef pair<int, int> ii;

    const int nmx=2e5;

    map<char,int> num;
    string st;
    int n,ans;

    void solve(){
        cin >> st;
        cin >> n;

        char cmp='a';
        while(cmp!= char('z'+1)){
            if(n == 26)
                n=0;
            num[cmp]=n;
            ++n;
            ++cmp;
        }    
        for(int i=0;i<st.size();++i)
            ans+=num[st[i]];
        cout << ans;
    }

    int main(){
        ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
        freopen("DEBUG.inp","r",stdin);
        freopen("DEBUG.out","w",stdout);
        solve();
        return 0;
    }
        