#include <iostream>
using namespace std;
class phone
{
    public:
    void call()
    {
        cout<<"you can make a call"<<endl;
    }
};
class camera{
    public:
    void click()
    {
        cout<<"you can take a photo"<<endl;
    }
};
class smartphone: public phone, public camera
{public:
    void apps()
    {
        cout<<"there are many apps in your mobile"<<endl;
    }
};
int main() {
    // Write C++ code here
    smartphone s;
    s.click();
    s.call();
    s.apps();
   

    return 0;
}