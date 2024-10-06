// check whether array is sorted or not

#include<iostream>
#include<vector>
using namespace std;

bool checkSorted(int v[], int n)
{
    if(n == 1)return true;

    if(v[0] < v[1] and checkSorted(v+1, n-1))return true;
    return false;
}


int main()
{
    int v[] = {1, 3, 15, 7};
    int n = sizeof(v)/sizeof(int);
    cout<<checkSorted(v, n); 
}

