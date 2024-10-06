// BFS Traversal
#include<bits/stdc++.h>
using namespace std;


// Time complexity - O(N) + O(2E)
// Space complexity - O(N); queue space, visited array space
vector<int>BFS(int n, vector<int> adj[])
{
    int vis[n+1] = {0};
    vis[1] = 1;

    queue<int>q;
    q.push(1);
    vector<int>bfs;

    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        bfs.push_back(node);

        for(auto it: adj[node])
        {
            if(!vis[it]){
                vis[it] = 1;
                q.push(it);
            }
        }


    }

     return bfs;
}
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
        adj[v].push_back(u); // not required for directed graph

    }

    vector<int>bfs = BFS(n, adj);

    for(auto x: bfs)
    {
        cout<<x<<" ";
    }
    cout<<endl;


    return 0;
}