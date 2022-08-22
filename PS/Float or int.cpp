#include<iostream>
#include<string>
using namespace std;
int main(){
	double num1;
	cin>>num1;
	int numInt=num1;
	double res=num1-numInt;
	if(res!=0){
		cout<<"float "<<numInt<<" "<<res<<endl;
	}else{
		cout<<"int "<<numInt<<endl;
	}
	return 0;
}
