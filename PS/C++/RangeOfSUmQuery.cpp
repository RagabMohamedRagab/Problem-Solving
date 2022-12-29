// Happy Code
// Time Complexity O(N
// Space Complexity O(N)
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long N,Q;
	cin>>N>>Q;
	int A[N]={0};
	int a=0;
	while(a<N){
		cin>>A[a];
		a++;
	}
	int B[N]={0};
	B[0]=A[0];
	for(int i=1;i<N;i++){
		B[i]=B[i-1]+A[i];
	}
    int x=1;
    while(x<=Q){
    	 int L,R;
    	 cin>>L>>R;
    	 L-=1;
    	 R-=1;
    	 if(L==0){
    	 	cout<<B[R]<<endl;
		 }else{
		 	cout<<B[R]-B[L-1]<<endl;
		 }
		 x++;
	}
	return 0;
}
