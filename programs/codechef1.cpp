#include <iostream>
using namespace std;

int main() {
	int t,n,sum = 0,cube = 0,s=0;
	cin>>t;
	while(t--){
	cin>>n;
	int a[n];
    for(int i = 0; i<n; i++)
	{
	    cin>>a[i];
	}
   for(int i = 0; i<n; i++)
	{
      for(int j =i; j<n; j++)
	    {
	       for(int k = i; k<=j; k++)
	        {   
	            sum = sum+a[k];
	        }
	        cube = cube + (sum*sum*sum);
	        sum = 0;
         }
      }
	cout<<cube%998244353<<endl;
	cube = 0;
    }
	
    
	return 0;
}
