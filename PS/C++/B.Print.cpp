// Happy Code
// Time Complexity O(N)
// Aulixary Space + Space =O(1)
#include<bits/stdc++.h>
using namespace std;
void Print(int N){
	for(int i=1;i<=N;i++){
		cout<<i;
		if(i<N)
		cout<<" ";
	}
}
int main(){
	int N;
	cin>>N;
	Print(N);
	return 0;
}
