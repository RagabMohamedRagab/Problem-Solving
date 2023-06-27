// Happy Code
// Time Complexity O(1)
// Space Complexity O(1)
#include<bits/stdc++.h>
using namespace std;
void Print(int N){
	if(N==0){
		return ;
	}
	cout<<"I love Recursion"<<endl;
	N--;
	Print(N);
}
int main(){
	int N;
	cin>>N;
	Print(N);
	return 0;
}
