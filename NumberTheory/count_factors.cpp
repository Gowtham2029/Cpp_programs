#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c = 0;
    for(int i = 2; i*i<=n; i++)
    {
        if(n%i == 0){
            c = 1;
            cout<<"false"<<endl;
            break;
        }
    }
    if(c == 0)cout<<"true"<<endl;
}

// every prime other than 2,3 can be represented in the form of 6*i + or -1 
// but not every number that can be represented as 6*i + or -1 can be prime