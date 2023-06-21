#include<bits/stdc++.h>
using namespace std;
int N;
void NewArray(int A[],int B[]){
       int len=N+N;
	   int C[len]={0};
       for(int a=0;a<N;a++){
       	C[a]=B[a];
	   }
	   for(int b=N;b<len;b++){
	   	C[b]=A[b-N];
	   }
	   for(int v=0;v<len;v++){
	   	cout<<C[v]<<" ";
	   }
}
int main(){
	cin>>N;
	int A[N]={0};
	int B[N]={0};
	for(int i=0;i<N;i++){
		cin>>A[i];
	}
	for(int j=0;j<N;j++){
		cin>>B[j];
	}
	NewArray(A,B);
 return 0;
}

