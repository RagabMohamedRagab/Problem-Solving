#include<bits/stdc++.h>
using namespace std;
int main(){
	long long A,B,C,D; //3 4 5 23
	cin>>A>>B>>C>>D;
	if(A+B-C==D||A+(B*C)==D||A-B+C==D||A-(B*C)==D||(A*B)+C==D||(A*B)-C==D){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	return 0;
}
