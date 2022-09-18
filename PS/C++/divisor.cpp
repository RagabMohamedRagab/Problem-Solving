//Nice Code
// Complexity Time O(N)
#include<bits/stdc++.h>
using namespace std;
int main(){
	int divisor;
	cin>>divisor;
	for(int i=1;i<=divisor;i++){
		if(divisor%i==0){
			cout<<i<<endl;
		}
	}
	return 0;
}
