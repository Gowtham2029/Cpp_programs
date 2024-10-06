#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void fun_Sum(vector<int> &v, int &sum)
{
    int flag = 0;
    int low = 0;
    int high = v.size();
   while(low < high)
   {
    if(v[low]+v[high] > sum)
    {
        high = high - 1;
    }

    else if(v[low]+v[high] < sum)
    {
        low = low + 1;
    }
    else {
        flag = 1;
        cout<<"yes"<<endl;
        break;
    }
   }
   if(flag == 0){
    cout<<"No"<<endl;
   }

}

int main()
{
    vector<int>v;
    int n, sum;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<"Enter sum: ";
    cin>>sum;

    fun_Sum(v, sum);

    


}