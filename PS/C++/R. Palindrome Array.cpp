// Happy Code
// Time Complexity O(N)
// Space Complexity O(N)
#include<bits/stdc++.h>
using namespace std;
long N;
long Arr[1000];
string mesg="NO";
void IsPalindrome(long L,long R){
	if(L>R){     // Base Case
		cout<<mesg<<endl;
		return;
	}
	if(Arr[L]==Arr[R]){
		mesg="YES";
		IsPalindrome(L+1,R-1);
	}else{
		cout<<mesg<<endl;
		return;
	}
}
int main(){
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>Arr[i];
	}
	IsPalindrome(0,N-1);
	return 0;
}
