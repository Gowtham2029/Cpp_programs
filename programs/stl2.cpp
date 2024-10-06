#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{   int n;
    vector <int> v;
    cout<<"enter the number of elements u want in the vector ";
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    vector<int>:: iterator i;
    i = v.begin();
    cout<<(*i)<<endl;
    i = v.end();
    i--;
    cout<<(*i)<<endl;

}