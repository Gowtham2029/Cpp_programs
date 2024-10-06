
#include<iostream>
using namespace std;

void prime_seive(int *p, int n)
{
    for(int i=3; i<n; i += 2)
    {
       p[i] = 1;
    }

    for(int i=3; i<n; i += 2)
    {
        if(p[i] == 1)
        {
            for(int j = i*i; j<n; j += i)
            {
               p[j] = 0;
            }
        }
    }

    p[0] = p[1] = 0;
    p[2] = 1;
}

int main()
{
    
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    int a[n] = {0};
    prime_seive(a, n);

    for(int i=0; i<n; i++)
    {
        if(a[i] == 1)
          cout<<i<<" ";
    }
    cout<<endl;



}