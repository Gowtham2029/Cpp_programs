#include <iostream>
using namespace std;

 int check(int n, int k)
 {
     if(n>=0)
     {
        n = n-k;
        check(n,k);
     }
     return n;
    
 }

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int n=5,k=3;
	   // cin>>n>>k;
	    if(n<k)
	    {
	        cout<<n<<endl;
	    }
	    else{
	    cout<<check(n,k)<<endl;
	    }
	}
	return 0;
}