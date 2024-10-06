#include <iostream>
#include<vector>
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
	    for(int i = 0; i<n; i++)
	    {
	        int x;
	        cin>>x;
	        v.push_back(x);
	    }
	    int x = v.size()/2;
	   int c0 = count(v.begin(), v.end(), 0);
	   int c1 = count(v.begin(), v.end(), 1);
	   if(c0 == c1)cout<<0<<endl;
	   if(v.size()%2 == 0)
	   {
	       if(c0>x)
	       {
	           cout<<x-c1<<endl;
	       }
	       else if(c1>x)
	       {
	           cout<<x-c0<<endl;
	       }
	   }
	   else{
	       cout<<-1<<endl;
	   }
	    
	}
	return 0;
}
