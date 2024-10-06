#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a[] = {2,5,24,7,97,34,1};
    sort(a, a+7);
    for(int i = 0; i<7; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    if(binary_search(a, a+7, 45))
    {
        cout<<"present";
    }
    else{
        cout<<"Not present";
    }

    return 0;
}