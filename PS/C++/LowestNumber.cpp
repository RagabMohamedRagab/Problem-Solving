// Time Complexity O(N)
// Space Complexity O(N)
#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	int A[N];
	int i=0;
	while(i<sizeof(A)/sizeof(A[0])){
		cin>>A[i];
		i++;
	}
	for(int j=N-1;j>=0;j--){
		cout<<A[j]<<" ";
	}
	cout<<endl;
	return 0;
	
}
