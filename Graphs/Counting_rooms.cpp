#include<bits/stdc++.h>
using namespace std;

void bfs(int i, int j, int n, int m, vector<vector<char>>&adj, vector<vector<int>>&visited)
{
    visited[i][j] = 1;
    queue<pair<int, int>>q;
    q.push({i, j});
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;

        q.pop();

        if(x-1 >= 0 && x-1 < n && y-1 >= 0 && y-1 < m && adj[x-1][y] == '.' && !visited[x-1][y])
        {
            visited[x-1][y] = 1;
            q.push({x-1, y});
        
        }
        if(x-1 >= 0 && x-1 < n && y-1 >= 0 && y-1 < m && adj[x][y+1] == '.' && !visited[x][y+1])
        {
            visited[x][y+1] = 1;
            q.push({x, y+1});
        
        }
        if(x-1 >= 0 && x-1 < n && y-1 >= 0 && y-1 < m && adj[x+1][y] == '.' && !visited[x+1][y])
        {
            visited[x+1][y] = 1;
            q.push({x+1, y});
        
        }
        if(x-1 >= 0 && x-1 < n && y-1 >= 0 && y-1 < m && adj[x][y-1] == '.' && !visited[x][y-1])
        {
            visited[x][y-1] = 1;
            q.push({x, y-1});
        
        }

    }
    

}


int count_rooms(int n, int m,  vector<vector<char>>&adj)
{
    vector<vector<int>>visited(n, vector<int>(m, 0));
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(adj[i][j] == '.' && visited[i][j] == 0)
            {
                cnt++;
                bfs(i, j, n, m, adj, visited);
            }
        
        }
    }
    return cnt;
}

int main()
{
    int n, m;
    cin>>n>>m;
    vector<vector<char>>adj(n, vector<char>(m, ' '));
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            char x;
            cin>>x;
            adj[i][j] = x;
        }
    }

   int cnt = count_rooms(n, m, adj);
   cout<<cnt<<endl;
   return 0;
}