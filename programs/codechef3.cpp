// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int T;
// 	cin>>T;
// 	while(T--)
// 	{
// 	    int n,count = 0;
// 		int max = 0;
// 	    cin>>n;
// 	    int a[n], b[n], x[n]={0};
// 	    for(int i = 0; i<n; i++){cin>>a[i];}
// 	    for(int i = 0; i<n; i++){cin>>b[i];}
	   
// 	    for(int i = 0; i<n; i++)
// 	    {
// 	        if(a[i]!=0 && b[i]!=0)
// 	        {
// 	            count++;
// 	        }
// 	        else
// 	        {
// 	            x[i] = count;
// 	             count = 0;
// 	        }
// 	    }
	   
// 	    for(int i = 0; i<n; i++)
// 	    {
// 	        if(max < x[i])
// 	        {
// 	            max = x[i];
// 	        }
// 	    }
// 	     if(max == 0)
// 	      {
// 	          cout<<count<<endl;
// 	      }
// 	      else
// 	      {
// 	         cout<<max<<endl;
// 	      }
	    
// 	}
// 	return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n], b[n];
	    for(int i=0; i<n; i++)
	    cin>>a[i];
	    for(int i=0; i<n; i++)
	    cin>>b[i];
	    int count,ans;
	    count=ans=0;
	    for(int i=0; i<n; i++){
	        if(a[i]!=0 && b[i]!=0)
	        count++;
	        else{
	            ans=max(ans,count);
	            count=0;
	        }
	    }
	    ans=max(ans,count);
	    cout<<ans<<endl;
	}
	return 0;
}
