#include<iostream>
using namespace std;
int main()
{
    int x = 3;
    switch(x)
    {
        case 2: x = 6;
          break;
        case 3: x = 7;
        case 4: x = 9;
         break;
        case 5: x = 23;
          break;
    }
    cout<<x<<endl;
}