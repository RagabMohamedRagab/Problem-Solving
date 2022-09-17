//Nice Code
// Complexity Time O(1);
#include<bits/stdc++.h>
using namespace std;
int main(){
	int Num1,afterConvert,res; // Number
	string strNum1; // string
	cin>>Num1;
	stringstream s,ss; // Convert Number To string 
	s<<Num1;
	s>>strNum1;
	reverse(strNum1.begin(), strNum1.end());  // Reverse String
    ss<<strNum1;
    ss>>afterConvert;
    res=afterConvert-Num1; // Must be Zero to be Palindrome 
    if(res==0){
    	cout<<afterConvert<<endl<<"YES"<<endl;
	}else{
		cout<<afterConvert<<endl<<"NO"<<endl;
	}
	
	return 0;
	
}
