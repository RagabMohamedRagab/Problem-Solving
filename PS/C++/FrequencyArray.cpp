#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,M;
	cin>>N>>M;
	int A[N]={0};
	for(int i=0;i<N;i++){
		cin>>A[i];
	}
	// M how many times appear in array
	int Fre[M+1]={0};
	for(int j=0;j<N;j++){
		++Fre[A[j]];
	}
	for(int a=1;a<=M;a++){
		cout<<Fre[a]<<endl;
	}
	return 0;
}
