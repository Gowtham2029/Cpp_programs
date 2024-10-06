#include <iostream>
#include<sstream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int a,b,sum = 0;
		int sum1=0;
		string s;
	    cin>>a>>b;
	    sum = a+b;
	    stringstream ss;
		ss<<sum;
		ss>>s;
		for(int i = 0; i<s.length(); i++)
		{
			if(s[i] == '0' || s[i] == '6' || s[i] == '9')
			   sum1 = sum1+6;
			if(s[i] == '1')sum1 = sum1+2;
			if(s[i] == '2'||s[i] == '5'|| s[i] == '3')sum1 += 5;
			if(s[i] == '4')sum1 += 4;
			if(s[i] == '7')sum1 += 3;
			if(s[i] == '8')sum1 += 7;
			
		}
		cout<<sum1<<endl;
	    
	}
	return 0;
}

