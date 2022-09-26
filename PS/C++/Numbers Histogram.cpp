// Happy Code
// Complexity Time N + N^2 = 0  
// O(N^2) 
#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,arr[100];
	char S;
	cin>>S; // +
	cin>>N; // 5
	for(int i=0;i<N;i++){
		cin>>arr[i]; // 5 2 4 3 7
	}
	for(int a=0;a<N;a++){	
		int b=1,y=arr[a];
		while(b++<=y){
			cout<<S;
		}
		cout<<endl;
	}
	return 0;
}
