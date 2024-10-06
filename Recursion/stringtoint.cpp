#include<iostream>
using namespace std;

int sum = 0;
int p = 1;
void strtoint(string str, int n)
{
    if(n == 0)
    {
      cout<<sum - 1<<endl;
      return;
    }

    sum = sum + ((str[n-1] - '0')*p);
    p = p*10;

    strtoint(str, n-1);
   
    return;




}

int main()
{
    string str;
    cout<<"enter the string: ";
    cin>>str;
    int n = str.length();
    strtoint(str, n);
    return 0;
}