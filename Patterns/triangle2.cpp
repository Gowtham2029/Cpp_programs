#include<bits/stdc++.h>
using namespace std;

// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// 1 2 3 4 5 6

int main(){
     int n;
     cin>>n;

     for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<"\n";
     }

     return 0;
}
