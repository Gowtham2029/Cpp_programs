// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;


void print(vector<vector<int>> &v){
    
      for(int i=0; i<v.size(); i++){
        for(int j = 0; j<v[0].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int m=3, n = 2;
    vector<vector<int>>v;
    for(int i=0; i<m; i++)
    {
      vector<int>m;
      for(int j=0; j<n; j++){
        m.push_back(i+j);
      }
      v.push_back(m);
    }
    
    
    print(v);
    
    
  
    return 0;
}