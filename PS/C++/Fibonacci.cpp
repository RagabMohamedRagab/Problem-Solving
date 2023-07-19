// Time Complexity O(2^N)
// Space Complexity O(1)
#include<bits/stdc++.h>
#define II long long 
using namespace std;
II Fibonacci(int N){
	if(N==1){
		return 0;
	}else if(N==2){
		return 1;
	}
	return Fibonacci(N-1)+Fibonacci(N-2);
}
int main(){
	II N;
	cin>>N;
	cout<<Fibonacci(N)<<endl;
	return 0;
}
