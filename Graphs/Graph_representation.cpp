// undirected graph
//-------------------

#include<bits/stdc++.h>
using namespace std;

// input format:
//-----------------
// 5, 6   -->   5 = (n) num of nodes, 6 = (m) num of edges
// 1, 2
// 4, 5
// 3, 5
// 1, 4
// 2, 5

// Graph:
// --------

//   1 - 2
//   |   |
//   |   |
//   |   |
//   4 - 5 - 3


// adjacency matrix representation of undirected graph
//------------------------------------------------------
// space complexity - O(n^2)
int main()
{
    int n, m;
    cin>>n>>m;
    int adj[n+1][n+1];

    for(int i = 0; i<m; i++)
    {
        int u, v;
        cin>>u>>v;
        adj[u][v] = 1;
        adj[v][u] = 1; // not required for directed graph

    }
}


// adjacency lists representation of undirected graph
// ----------------------------------------------------
// space complexity - O(2*E)
// E = number of edges, as for every edge we are storing it two times. i.e., u->v and v->u

// NOTE: this is the reason, for directed graph have space complexity as O(E). i.e., it is storing only one time. u->v
int main()
{
    int n, m;
    cin>>n>>m;
    vector<int>adj[n+1];

    for(int i = 0; i<m; i++)
    { 
        int u, v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);  // not required for directed graph
    }

}

