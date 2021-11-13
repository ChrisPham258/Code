#include<bits/stdc++.h>

#define ll long long
#define f(i, a, b, c) for (int i = a; i < b; i+=c )
#define f1(i, a, b, c) for (int i = a; i <= b; i+=c )
#define ff(i, a, b, c) for (int i = a; i >= b; i-=c)
#define nmax 100005
#define buff 100005
#define infi 999999999999999

using namespace std; 

long long n, k; 
set<pair<long long, long long>> priod; 
vector<pair<long long, long long>> G[nmax]; 

void dijkstra(long long s, long long t)
{ 
    vector<long long> cost(n + 5, infi);
    vector<long long> num_node(n + 5, 0); 
    vector<long long> bridge(n + 5, 0); 

    cost[s] = 0; 
    priod.insert({s, 0}); 
    while (priod.empty() == false)
    { 
        pair<long long, long long> top = *priod.begin(); 
        priod.erase(*priod.begin()); 

        long long u = top.first; 
        long long c_u = top.second; 

        for(int i = 0; i < G[u].size(); ++i) 
        { 
            long long v = G[u][i].first; 
            long long c_v = G[u][i].second; 

            if (cost[v] > cost[u] + c_v)
            { 
                cost[v] = cost[u] + c_v; 
                num_node[v] = num_node[u] + 1; 
                bridge[v] = bridge[u] + (c_v == buff); 
                priod.insert({v, cost[v]});
            }
        }
    }
    if(cost[n] - (buff * num_node[n]) == infi)
        cout << -1;
    else{
        cout << cost[n] - (buff * num_node[n]) << endl;
        cout << bridge[n];
    }  
}

int main()
{ 
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    freopen("TD.INP","r", stdin);
    freopen("TD.OUT","w",stdout); 
    cin >> n >> k; 
    for(int i = 1; i <= k; ++i)
    { 
        long long u, v; 
        cin >> u >> v; 

        G[u].push_back({v, buff}); 
        G[v].push_back({u, buff}); 
    }

    long long u, v, c; 
    while(cin >> u >> v >> c)
    { 
        G[u].push_back({v, buff + c}); 
        G[v].push_back({u, buff + c}); 
    }
    
    dijkstra(1, n); 
    return 0; 
}