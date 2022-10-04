// Happy Code 
// Complexity Time O(N^2)
#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	for(int i=1;i<=N;i++){
		for(int a=N;a>i;a--){
			cout<<" ";
		}
		for(int b=1;b<=i*2-1;b++){ // 1*2-1=1 2*2
			cout<<"*";
		}
		cout<<endl;
	}
	for(int x=N;x>=1;x--){
		for(int y=N;y>x;y--){
			cout<<" ";
		}
		for(int z=1;z<=x*2-1;z++){
			cout<<"*";
		}
		cout<<endl;
		
	}
	return 0;
}
