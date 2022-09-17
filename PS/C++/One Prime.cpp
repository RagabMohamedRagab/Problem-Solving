#include<bits/stdc++.h>
//Prime Must Be great than 1
// It have to factories
// Complexity Time O(N)
using namespace std;
int main(){
	int P,i=2;
	bool IsPrime=true;
	cin>>P;
	while(i<P){
		if(P%i==0){
			IsPrime=false;
			break;
		}
		i++;
	}
	if(IsPrime){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	return 0;
}
