#include<iostream>
using namespace std;
int main(){
	char ch,res;
	cin>>ch;
	if(ch>=65&&ch<=90){
		res=ch+32;
	}else{
		res=ch-32;
	}
	cout<<res<<endl;
	return 0;
}
