#include<iostream>
using namespace std;
int main(){
	long Num1,Num2;
	cin>>Num1>>Num2;
	if(Num1%Num2==0){
		cout<<"Multiples";
	}else if(Num2%Num1==0){
		cout<<"Multiples";
	}else{
		cout<<"No Multiples";
	}
	return 0;
}
