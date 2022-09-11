#include<bits/stdc++.h>
using namespace std;
int main(){
  int N;
 bool Istrue=true;
  int j=0;
  do{
  	cin>>N;
  	if(N==1999){
  		cout<<"Correct"<<endl;
  		Istrue=false;
	  }else{
	  	cout<<"Wrong"<<endl;
	  }
	  j++;
  }while(Istrue);
	return 0;
}
