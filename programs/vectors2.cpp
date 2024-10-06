// #include <iostream>
// #include<vector>
// #include<utility>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int N,win;
// 	int x = 0,max,i;
// 	cin>>N;
// 	int p1[N], p2[N];
// 	vector<pair<int, int>> v;
// 	for( i = 0; i<N; i++)
// 	{
//         cin>>p1[i]>>p2[i];
// 	    v.push_back({p1[i],p2[i]});
// 	}
//     max = p1[0] - p2[0];
// 	for( i = 0; i<N; i++)
// 	{
// 	  if(p1[i]>p2[i]) { 
// 	    if(max <= p1[i]-p2[i])
// 	    {
            
// 	        max = p1[i]-p2[i];
//             win = 1;
//         }
//       }
//       else if(p2[i]>p1[i]){
//         if(max<=p2[i]-p1[i]){
//         max = p2[i] - p1[i];win = 2;}
//       }
           
// 	}
    
// 	cout<<win<<" "<<max;
    
// 	return 0;
// }
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int max =0;
	int win =0;
	int a1=0,b1=0;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    a1+=a;
	    b1+=b;
	    if(a1>b1){
	        if(max<a1-b1){
	            max=a1-b1;
	            win=1;
	        }
	    }else if(b1>a1){
	        if(max<b1-a1){
	            max=b1-a1;
	            win=2;
	        }
	    }
	    
	}
	
	cout<<win<<" "<<max<<endl;
	return 0;
}