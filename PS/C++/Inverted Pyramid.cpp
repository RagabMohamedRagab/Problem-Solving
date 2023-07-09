#include<bits/stdc++.h>
using namespace std;
void Pyramid(int N){
	for(int i=N;i>=1;i--){
		for(int a=N;a>i;a--){
			cout<<" ";
		}
		for(int b=1;b<i*2;b++){
			cout<<"*";
		}
		cout<<endl;
	}
}
int main(){
	int N;
	cin>>N;
	Pyramid(N);
	return 0;
}
