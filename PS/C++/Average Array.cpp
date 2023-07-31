// Happy Code
// Time Complexity O(N)
// Space Complexity O(N)
#include<bits/stdc++.h>
#define II double 
using namespace std;
int N;
II Arr[1000]={0};
II Average(int i){
	if(i<0){
		return 0;
	}
	return Arr[i]+Average(i-1);
}
int main(){
	cin>>N;
	int a=0;
	while(a<N){
		cin>>Arr[a];
		a++;
	}
	cout<<fixed<<setprecision(6)<<Average(N-1)/N; //  3.0000
	return 0;
}
