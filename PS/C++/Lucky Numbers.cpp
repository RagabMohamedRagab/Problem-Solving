// Nice Code
#include<bits/stdc++.h>
using namespace std;
int main(){
	int A,B,count=-1;
	cin>>A>>B;
	for(int i=A;i<=B;i++){
	  int j=i,flag=0;
	  while(j!=0){
	  	 int mod=j%10;
	  	 if(mod!=4&&mod!=7){
	  	 	flag++;
	  	 }
		   j/=10;
	  }	
	  if(flag==0){
	  	cout<<i<<" ";
	  	count++;
	  }
	  
	}
	if(count==-1){
		cout<<-1<<endl;
	}
	return 0;
}
