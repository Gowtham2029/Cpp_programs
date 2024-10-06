#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

vector<int>v;

void naive(int n)
{
    
    for(int i = 2; i<=n; i++)
    {
        if(n%i == 0)
        {
            while(n%i == 0){
                n = n/i;
            }
            v.push_back(i);
        }

        
        
    }   
}


void optimized(int n)
{
    vector<pair<int, int>>p;
    int count = 0;

    for(int i = 2; i*i<=n; i++)
    {
        if(n%i == 0)
        {
            while(n%i == 0){
                count++;
                n = n/i;
            }
            p.push_back(make_pair(i, count));
        }

        if(i != 1){
            p.push_back(make_pair(n, 1));
        }


        
    }   

    for(auto x: p){
        cout<<x.first<<"^"<<x.second<<endl;
    }
}

void seiveMethod()
{
  
}

int main()
{
   int n;
   cin>>n;

   naive(n);
   for(int x: v){
    cout<<x<<" ";
   }

  cout<<endl;
  cout<<"*******************"<<endl;
   v.clear();
   optimized(n);

   
}