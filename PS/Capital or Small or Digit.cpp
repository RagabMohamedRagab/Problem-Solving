#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
	char L;
	cin>>L;
	if(isdigit(L)){
		cout<<"IS DIGIT";
	}else{
		cout<<"ALPHA"<<endl;
		if(isupper(L)){
			cout<<"IS CAPITAL"<<endl;
		}else{
			cout<<"IS SMALL"<<endl;
		}
	}
	return 0;
}
