#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
   int roll[] = {101, 108, 103, 105};
   int marks[] = {70, 80, 40, 90};
   pair<int, int> p[4];
   for(int i = 0; i<4; i++)
   {
     p[i] = {roll[i], marks[i]};
   }

   sort(p.);

   for(int i = 0; i<4; i++)
   {
    cout<<p[i].first<<" "<<p[i].second<<endl;
   }
   return 0;
}