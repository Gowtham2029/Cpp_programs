#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        for(auto i = 0; i<matrix.size(); i++)
        {
            for(int j = 0; j<i.size(); j++)
            {
               if(matrix[i][j] == 0)
               {
                  matrix[i] = 0;
                  matrix[j] = 0;
               }
            }
        }
        for(auto x:matrix)
        {
            for(auto y:x)
            {
                cout<<y<<" ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    Solution s;
    vector<vector<int>>v = {{1,1,1},{1,0,1},{1,1,1}};
    s.setZeroes(v);
}