#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
class Solution {
public:
    int divide(int dividend, int divisor) {
         int d;
        int s ;
        s = labs(divisor);
        d = labs(dividend);
        
        
        int count = 0;
        cout<<s<<" "<<d<<endl;
        for(int sum = 0; d>=sum;sum += s )
           {
            if(sum>INT_MAX/10)return INT_MAX;
            if(sum<INT_MIN/10)return INT_MIN;
            //    sum = sum+divisor;
               count++;
           }
        if((dividend>0 && divisor>0) || (dividend<0 && divisor<0))
             return count-1;
        else 
             return -(count-1);
       }
};

int main()
{
    Solution s;
    int l = s.divide(-2147483648, -1);
    cout<<l;
}