#include <iostream>
using namespace std;
int x = 1;
int isequal(int A[], int N)
{
    int j;
    for(int i = 0; i<N; i++)
	{
	  for( j = (i+1); j<N; j++)
	  {
	   if(A[i] == A[j] && x<=N)
	   {
	        A[i]+=1;
	        
	        isequal(A,N);
	        x++;
	   }
	   
	   
	  }
	  
	}
	return x;
}
int main() {
	// your code goes here
	// int T;
	// cin>>T;
	// int N;
	// cin>>N;
    int N = 4;
	int A[N] = {3,1,1,2};
	// for(int i = 0; i<N; i++)
	// {
	//     cin>>A[i];
    // }
    int y = isequal(A,N);
    cout<<y<<endl;
    
    return 0;
}