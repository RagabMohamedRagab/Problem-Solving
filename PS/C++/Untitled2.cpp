#include<bits/stdc++.h>
using namespace std;
int main(){
	long long A,B;
	cin>>A>>B;
	if(abs(A-B)>=2||A==0||B==0){
		cout<<"NO"<<endl;
	}else{
		cout<<"YES"<<endl;
	}
	return 0;
}
