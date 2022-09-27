// Happy Code
// Complexity Time O(N^2)
#include<bits/stdc++.h>
using namespace std;
int main(){
	int N; // 5
	cin>>N;
    for(int i=1;i<=N;i++){
    	int j=N;
    	while(j>=i){
    		cout<<"*";
    		j--;
		}
		cout<<endl;
	}
	return 0;
}
