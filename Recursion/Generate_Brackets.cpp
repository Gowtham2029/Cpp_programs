#include<iostream>
using namespace std;

void generate_brackets(char *a, int n, int idx, int open, int close)
{
    if(idx == 2*n)
    {
        a[idx] = '\0';
        cout<<a<<endl;
        return;
    }
    if(open < n){
        a[idx] = '(';
        generate_brackets(a, n, idx+1, open+1, close);
    }
    if(close < open)
    {
        a[idx] = ')';
        generate_brackets(a, n, idx+1, open, close+1);
    }
    return;
}

int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    char a[1000];
    generate_brackets(a, n, 0, 0, 0);

}