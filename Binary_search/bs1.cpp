#include<iostream>
#include<vector>
using namespace std;



int RecursiveBs(vector<int>&v, int low, int high, int target)
{
    if(low > high)return -1;

    int mid = low + (high - low)/2;
    if(v[mid] == target)return mid;
    else if(v[mid] < target)
    {
        return RecursiveBs(v, mid+1, high, target);
    }
    else
    {
        return RecursiveBs(v, low, mid-1, target);
    }
}


int main()
{
    vector<int>v;
    int n;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int target;
    cout<<"enter target: ";
    cin>>target;
    int low = 0;
    int high = v.size()-1;

    // recursive BS
    int x = RecursiveBs(v, low, high, target);
    cout<<"Recursive BS is "<<x<<endl;


    // iterative BS
    while(low <= high)
    {
        int mid = low + (high - low)/2;
        if(v[mid] == target)
        {
            cout<<"found at index: "<<mid;
            return 0;
        }
        else if(v[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
}