
#include<iostream>
#include<vector>
using namespace std;

#define ll long long

ll k;
vector<ll>a, b, c;

int main()
{
    ll n,num;
   cin>>k;
   for(int i = 0; i<k; i++)
   {
    cin>>num;
     b.push_back(num);
   }

   for(int i = 0; i<k; i++)
   {
    cin>>num;
     c.push_back(num);
   }
   cin>>n;
   compute(n);

   b.clear();
   c.clear();


}
