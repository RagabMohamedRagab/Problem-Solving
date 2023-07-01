// Happy Code
// Time Complexity O(Logn)
// Space Complexity O(1)
#include<bits/stdc++.h>
using namespace std;
void BaseConverssion(int N){
	if(N==0){
		return ;
	}
	BaseConverssion(N/2);
	cout<<N%2;	
}
int main(){
	int times;
	cin>>times;
	int a=1;
	while(a<=times){
		int N;
		cin>>N;
		BaseConverssion(N);
		cout<<endl;
		a++;
	}
	return 0;
}
