#include<iostream>
#include<vector>
using namespace std;

const int N = 100000;

vector<int>primes;
int p[N] = {0};

void seive(){
    for(int i = 2; i<N; i++)
    {
        if(p[i] == 0){
            primes.push_back(i);
            for(int j = i; j<N; j += i){
                p[j] = 1;
            }
        }
    }
}

int main()
{
   seive();

   int n,m;
   cout<<"Enter the two num: ";
   cin>>m>>n;

   bool segment[m-n+1];

    for(int i = 0; i< (m-n+1); i++){
    segment[i] = 0;
    }
   
   for(auto x: primes)
   {
    if(x > n) break;

    int start = (m/x)*x;
    
    if(x>=m && x<=n)start = x*2;

    for(int i= start; i<n; i+=x){
        segment[i-m] = 1;
    }
  }

   for(int i = 0; i< m-n+1; i++){
    if(segment[i] == 0){
        cout<<i<<" ";
    }
   }
   return 0;
}