#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a,b,k;
	cin>>a>>b>>k;
	if(a>=0&&b>=0){
		if(a%k==0&&b%k==0){
			cout<<"Both"<<endl;
		}else if(a%k==0&&b%k!=0){
			cout<<"Memo"<<endl;
		}else if(a%k!=0&&b%k==0){
			cout<<"Momo"<<endl;
		}else if(a%k!=0&&b%k!=0){
			cout<<"No One"<<endl;
		}
	}else{
		cout<<"Enter Positive Numbers"<<endl;
	}
	return 0;
}
