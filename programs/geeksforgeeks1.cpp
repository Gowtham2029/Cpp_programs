#include<iostream>
using namespace std;
int main()
{
    int A[] = {1, 10};
    int i, j, max=0;
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
        if(j>=i && A[j]>=A[i]) 
        { 
          
          if(max < j-i)
          {
            max = j-i;
          }
        }
        }
    }
    cout<<max;
    
    return 0;
}