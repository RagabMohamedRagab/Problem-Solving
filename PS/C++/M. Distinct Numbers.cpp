#include<bits/stdc++.h>
using namespace std;
int size;
int DistinctNumber(int A[]){
	  int count=0;
	 for(int i=0;i<size;i++){
	 	for(int j=i+1;j<size;j++){
	 		if(A[i]==A[j]){
	 			count++;
	 			break;
			 }
		 }
	 }
	 
	return count;
}
int main(){
	cin>>size;
	int Arr[size]={0};
	int a=0;
	while(a<size){
		cin>>Arr[a];
		a++;
	}
	int result=DistinctNumber(Arr);
	cout<<size-result<<endl;
	
	return 0;
}
