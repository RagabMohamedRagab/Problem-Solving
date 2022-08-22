#include<iostream>
using namespace std;
int main(){
   int A,B;
	char oper;
	cin>>A>>oper>>B;
	switch(oper){
		case '>':
			if(A>B){
				cout<<"Right"<<endl;
			}else{
				cout<<"Wrong"<<endl;
			}
		 break;
		 case '<':
		 	if(A<B){
				cout<<"Right"<<endl;
			
			}else{
				cout<<"Wrong"<<endl;
			}
		 break;
		 case '=':
		 	if(A==B){
				cout<<"Right"<<endl;
			
			}else{
				cout<<"Wrong"<<endl;
			}
		 break;
	}
	return 0;
}
