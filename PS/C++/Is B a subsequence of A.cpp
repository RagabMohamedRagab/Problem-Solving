#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,M;
	cin>>N>>M;
	int A[N]={0};
	int B[M]={0};
	for(int i=0;i<N;i++){
		cin>>A[i];
	}
	for(int j=0;j<M;j++){
		cin>>B[j];
	}
	int pivot=0;
	// 1 4 3 7
	// 4 1
	int a=0;
	while(a<N){
		if(B[pivot]==A[a]){ // 4==1 4==4  
			pivot++;// 0 1
		}
		a++; // 1 2
	}
	if(pivot==M){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
}
