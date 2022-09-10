#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,val,Pos=0,Neg=0,even=0,odd=0;
	cin>>N;
	for(int i=1;i<=N;i++){
		cin>>val;
		if(val%2==0){
			even++;
		}
		if(val%2!=0){
			odd++;
		}
		 if(val>0){
			Pos++;
		}
		 if(val<0){
			Neg++;
		}
	}
	cout<<"Even: "<<even<<endl;
	cout<<"Odd: "<<odd<<endl;
	cout<<"Positive: "<<Pos<<endl;
	cout<<"Negative: "<<Neg<<endl;
	return 0;
}
