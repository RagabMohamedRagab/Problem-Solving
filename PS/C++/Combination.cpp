// Permutation It cares about order.
// Combination It doesn't care about order.
/*
  n! / r!(n - r)!
*/
// Happy Code
// Time Complexity O(N)
// Space Complexity O(1)
#include<bits/stdc++.h>
using namespace std;
int Fact(int  N){
	if(N==0){
		return 1;
	}
	return N * Fact(N-1);
}
int main(){
	int  N,R;
	cin>>N>>R;
	if(R > N){
	cout<<0<<endl;
	}else{	
	cout<<Fact(N)/(Fact(R)*Fact(N-R))<<endl;
    }
	return 0;
}
