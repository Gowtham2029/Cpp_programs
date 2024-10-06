#include<bits/stdc++.h>
using namespace std;

// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1


int main(){
     int n;
     cin>>n;

     for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
           if((i+j)&1){
                cout<<"0 ";
           }else{
             cout<<"1 ";
           }
        }
        cout<<"\n";
     }

     return 0;
}