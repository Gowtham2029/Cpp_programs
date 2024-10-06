#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        set<int>s;
        vector<int>v;
       double l;
        for(int i = 0; i<nums1.size(); i++)
        {
            s.insert(nums1[i]);
        }
        for(int i = 0; i<nums2.size(); i++)
        {
            s.insert(nums2[i]);
        }
        for(auto it = s.begin(); it!=s.end(); it++)
        {
            v.push_back(*it);
        }
        
        if(v.size()%2 == 1)
        {
           int y = v.size()/2;
           l = (double)(v[y]);
           return l;
        }
        else{
            int x = v.size()/2;
            l = (double)(v[x]+v[x-1])/2;
        }
       v.clear();
        return l;
    }
};

int main()
{
    vector<int> nums1, nums2;
    nums1 = {3};
    nums2 = {-2, -1};
    Solution sol;
    double l = sol.findMedianSortedArrays(nums1, nums2);
    cout<<l<<" ";

}