// Happy Code
// Time Complexity O(N)
// Space Complexity O(N)
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long size,N,s=0;
	cin>>size>>N;
	long long A[size]={0};
	int b=0;
	while(b<size){
		cin>>A[b];
		b++;
	}
	sort(A,A+size);
    reverse(A,A+size);
	int a=0;
	while(a<N){
		s+=A[a];
		a++;
	}
	cout<<s<<endl;
	return 0;
}
