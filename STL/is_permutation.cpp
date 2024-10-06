// is_permutation : it is used to check whether given two containers are permutations of each other or not.

// It means that they are having same set of elements, but the arrangement or order of elements differ

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
   vector<int>v1 = {10,20,40,30};
   vector<int>v2 = {30,40,20,10};

   if(is_permutation(v1.begin(), v1.end(), v2.begin())){
    cout<<"Yes \n";

   }
   else{
    cout<<"No \n";
   }
}