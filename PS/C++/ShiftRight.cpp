// Happy Code
// Time Complexity O(N)
// Space Complexity O(N)
#include<bits/stdc++.h>
using namespace std;
int N;
void ShiftRight(int A[],int mod){
	int item=N-mod;
    for(int j=item;j<N;j++){
    	cout<<A[j]<<" ";
	}
	for(int i=0;i<item;i++){
		cout<<A[i]<<" ";
	}
}
int main(){
	int X;
	cin>>N>>X;
	int A[N]={0};
	int a=0;
	while(a<N){
		cin>>A[a];
		a++;
	}
	int mod=X%N;
	ShiftRight(A,mod);
	return 0;
}
