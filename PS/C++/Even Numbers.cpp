#include<bits/stdc++.h>
using namespace std;
int main(){
	int c,even=0;
	cin>>c;
	for(int i=1;i<=c;i++){
		if(i%2==0){
			even++;
			cout<<i<<endl;
		}
	}
	if(even==0){
		cout<<"-1"<<endl;
	}
	return 0;
}
