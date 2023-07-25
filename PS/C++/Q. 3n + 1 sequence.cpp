// Happy Code
// Time Complexity O(N)
// Space Complexity O(1)
#include<bits/stdc++.h>
using namespace std;
int counter=1;
void Sequenece(long N){
	if(N==1){
		cout<<counter<<endl;
		return;
	}
	counter++;
	Sequenece(N%2==0?N/2:3*N+1);
}
int main(){
	long N;
	cin>>N;
	Sequenece(N);
	return 0;
}
