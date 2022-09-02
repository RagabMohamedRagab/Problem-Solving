#include<iostream>
using namespace std;
int main(){
	int A,B,C;
	char S,P;
	cin>>A>>S>>B>>P>>C;
	switch(S){
		case '+':
			
			if(C==A+B){
				cout<<"Yes"<<endl;
			}else{
				
				cout<<A+B<<endl;
			}
			break;
		case '-':
			
			if(C==A-B){
				cout<<"Yes"<<endl;
			}else{
				cout<<A-B<<endl;
			}
			break;
		case '*':
			
			if(C==A*B){
				cout<<"Yes"<<endl;
			}else{
				cout<<A*B<<endl;
			}
			break;
	}
	return 0;
}
