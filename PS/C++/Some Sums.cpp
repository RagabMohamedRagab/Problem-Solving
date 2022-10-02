#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,A,B,full_sum=0;
	cin>>N>>A>>B; // 20 2 5
	for(int i=1;i<=N;i++){ // 1 2 3 4 5 6 7 8 9 10
		int sum=0;
		int j=i; // 1 2 3 4 5 6 7 8 9 10
		while(j!=0){ // 1!=0 2!=0 3!=0 4!=0 5!=0 6!=0 7!=0  
			sum+=j%10; // 1 3 4 5 6 7
			j/=10;     // 0 0 0 0 0
		}
		if(sum>=A&&sum<=B){ 
			full_sum+=i; // 2 + 3 + 4 + 5 
		}
	}
	cout<<full_sum;
	return 0;
}
