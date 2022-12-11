#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	int A[N]={0};
	int B[N]={0};
	for(int i=0;i<N;i++){
		cin>>A[i];
	}
	sort(A,A+N);
	for(int j=0;j<N;j++){
		cin>>B[j];
	}
	sort(B,B+N);
	int b=0;
	while(b<N){
		if(A[b]!=B[b]){
			cout<<"no"<<endl;
			return 0;
		}
		b++;
	}
	cout<<"yes"<<endl;

	
	return 0;
}
