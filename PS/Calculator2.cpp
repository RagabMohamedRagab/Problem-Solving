#include<iostream>
using namespace std;
int main(){
    long int Num1,Num2,result;
	char oper;
	cin>>Num1>>Num2;
	cout<<"Sum Enter +\nSub -\nMulti *\ndiv /\n"<<endl;
	cin>>oper;
	switch(oper){
		case '+':
			result=Num1+Num2;
			break;
		case '-':
			result=Num1-Num2;
			break;
		case '*':
			result=Num1*Num2;
			break;
		case '/':
			result=Num1/Num2;
			break;
		default :
			cout<<"Try Again.."<<endl;
	}
	cout<<result<<endl;
	return 0;
}
