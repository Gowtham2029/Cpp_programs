#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i = 1; i*i <= n; i++)
    {
        if(i * (n/i) == n)
        {
            cout<<i<<" ";
            if(i != n/i){
                cout<<(n/i)<<" ";
            }
        }
    }

    return 0;
}