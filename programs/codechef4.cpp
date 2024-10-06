#include <iostream>
#include<algorithm>
using namespace std;



int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int n,flag;
	    cin>>n;
	    int a[n];
	    for(int i = 0; i<n; i++)
	    {
	        cin>>a[i];
	    }
	    if(n%2 == 1)
	    {
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	      sort(a, a+n);
          for(int i = 0; i<n; i++)
          {
            if(i%2 == 0 && a[i] != a[i+1])
            {
               flag = 0;
            }
            else if(i%2 == 0)
            {
                flag = 1;
            }
          }
        }
	    if(flag == 0)cout<<"NO"<<endl;
        else if(flag == 1)cout<<"YES"<<endl;
	}
	return 0;
}
