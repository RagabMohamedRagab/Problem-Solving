// Happy Code
// Complexity Time O(N^2)
#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,T;
	cin>>N;
	int i=0;
	while(i<N){
		cin>>T;
		if(T==0){
			cout<<T<<" ";
		}else{
		while(T!=0){
			cout<<T%10<<" ";
			T/=10;
		}
	}
		cout<<endl;
		i++;
	}
	return 0;
}
