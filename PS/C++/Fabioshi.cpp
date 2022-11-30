// Happy Code - Finished From Midterms
// Time Complexity O(N)
// Space Complexity O(1)
#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	int A[100];
	cin>>N; //3
	if(N==1){
		cout<<"0"<<endl;
		return 0;
	}
	A[0]=0;
	A[1]=1;
	// 0 1 1 2 3 5 8 13
	// 1 2 3 4 5 6 7 8
	int t1=0,t2=1,temp=0,c=2,a=1;
	for(int i=1;;i++){ // 1
		temp=t1+t2; // 1 2 
		t1=t2; //  t1=1 1 
		t2=temp; // t2=1 2
		A[c++]=temp;
		if(N==a){
		 for(int j=0;;j++){
		 	if(j==N-1){
		 		cout<<A[j]<<endl;
		 		return 0;
			 }
		 }
		} 
		a++;
		
	}
}
