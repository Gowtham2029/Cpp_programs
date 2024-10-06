// weighted graph
//------------------

#include<bits/stdc++.h>
using namespace std;

// n m
// u v wt --> m lines

int main()
{
    int n, m;
    cin>>n>>m;

    adj[n+1][n+1];
    for(int i = 0; i<m; i++)
    {
        int u, v, wt;
        cin>>u>>v>>wt;
        adj[u][v] = wt;
        adj[v][u] = wt;  // not required for directed graphs
    }
}

int main()
{
    int n, m;
    cin>>n>>m;
    vector<pair<int, int>> adj[n+1];

    for(int i = 0; i<m; i++)
    {
        int u, v, wt;
        cin>>u>>v>>wt;
        
        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt}); // not required for directed graphs
    }
}


