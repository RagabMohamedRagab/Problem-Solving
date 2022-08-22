#include<bits/stdc++.h>
using namespace std;
int main(){
	 int A,B,C,D;
	 cin>>A>>B>>C>>D;
	 int num1=A%100;
	 int num2=B%100;
	 int num3=C%100;
	 int num4=D%100;
	 int result=num1*num2*num3*num4;
	 if(result%100==0||result%100==4||result%100==3){
	 	cout<<"0"<<result%100<<endl;
	 }else{
	 	cout<<result%100<<endl;
	 }
	return 0;
}

