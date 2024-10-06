#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;

    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    set<int>s;

    for(int i = 0; i<k; i++)
    {
        s.insert(v[i]);
    }

    int sum = 0;
    int x = 0;
    for(auto it = s.begin(); it != s.end(); it++)
    {
        x = (*it);

    }
    sum += x;
    int low = 0;
    int high = k;
    
    for(low = 1; low < n-k; low++)
    {
        s.erase(v[low-1]);
        s.insert(v[high]);
        
       int x = 0;
    for(auto it = s.begin(); it != s.end(); it++)
    {
        x = (*it);

    }
        sum += x;


        high++;
            
        
    }
    int maxi = 0;
    for(int i = n-k; i<n; i++)
    {
       maxi = max(maxi, v[i]);
    }
    cout<<"sum is "<<sum+maxi<<endl;    
}