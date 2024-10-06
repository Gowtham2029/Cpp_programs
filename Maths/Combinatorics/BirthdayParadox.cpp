
#include<iostream>
using namespace std;

int main()
{
    float x = 1.0;

    int people = 0;
    int numerator = 365;
    int denominator = 365;

    float p;
    cin>>p;

    while(x > 1-p){
       
       x = x*numerator / denominator;
       numerator--;
       people++;

       cout<<"people: "<<people<<" probability: "<<x<<endl;
    }

    
       
}