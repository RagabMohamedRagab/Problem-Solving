// Nice Code 
// Complexity Time o(N)
#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,nums,Max_num=0;
	cin>>N; // 5
	for(int i=0;i<N;i++){
		cin>>nums; // 1 8 5 7 5
		if(nums>Max_num){
			Max_num=nums;
		}
	}
	cout<<Max_num<<endl;
	return 0;
}
