// subarray of an array of size N, must be divisible by N

#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

 

int main()
{ 
   
    int n;
    cin>>n;
    int v[10];
    int p[10] = {0};
 
   
    //  memset(p, 0, sizeof(p));
    int sum = 0;
    for(int i=0; i<n; i++)
    {
       cin>>v[i];
       sum += v[i];
       sum = sum%n;
       sum = (sum + n)%n;
       p[sum]++;
    }
    int ans = 0;
    for(int i = 0; i<n; i++){
        int m = p[i];
        ans = ans + (m*(m-1))/2;
    }

    cout<<ans;

}