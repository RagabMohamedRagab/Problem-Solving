#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,Fact;
	cin>>N;
	for(int i=1;i<=N;i++){
		int Multi=1;
		cin>>Fact;
	    for(int j=1;j<=Fact;j++){
	    	Multi*=j;
		}
		cout<<Multi<<endl;
	}
	return 0;
}
