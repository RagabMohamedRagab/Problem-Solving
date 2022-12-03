#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int A[n]={0};
	int i=0;
	while(i<n){
		cin>>A[i];
		i++;
	}
	// 4 6 8
	// 2 3 4
	int op=0;
	for(int a=0;;a++){
		int c=0;
	  int b=0;
	  while(b<n){
	  	  if(A[b]%2==0){ // 4%2==0 6%2==0 8%2==0
	  	  	 A[b]/=2;  //  
	  	  	 c++; // 1 2 3
			}
			b++; //0 1 2
	  }	
	  if(c==n){ // 3==3
	  	op++;
	  }else{
	  	break;
	  }
	}
	cout<<op<<endl;
}
