#include <iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>v;
	    map<int, int>m;
	    
	    for(int i = 0; i<n; i++)
	    {
	        int x;
	        cin>>x;
	        v.push_back(x);
	    }
	    if(v.size() == 1){
	        cout<<0<<endl;
	    }
	    for(auto x:v)
	          m[x]++;
	    int res = 0, c = 0;     
	    for(auto i:m)
	    {
	        if(c<i.second)
	        {
	            res = i.first;
	            c = i.second;
	        }
	    }
	    
	    cout<<res<<endl;
	    
	}
	return 0;
}
