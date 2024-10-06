#include<bits/stdc++.h>
using namespace std;

class solution
{

  public:
  int a;
  int b;
  friend int op(solution &obj);
};

int op(solution &obj)
{
    int c=10,d = 20;
    obj.a = c;
    obj.b = d;
    return obj.a*obj.b;
}

int main()
{
    solution obj;
    int x = op(obj);
    cout<<x;
    return 0;
}