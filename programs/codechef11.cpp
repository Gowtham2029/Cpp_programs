#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
        cin>>n;
	    string s;
	    string r;
        cin>>s;
        cin>>r;
	    int cs = 0, cr = 0;
	    for(int i = 0; i<n; i++)
	    {
	        if(s[i] == '1')
             {
                cs++;
             }
	        if(r[i] == '1')
             {
                cr++;
             }
	    }
	    
	    if(cs == cr)cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
