// Happy Code
// Complexity Time O(N^2)
#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,D;
	cin>>N;
	int i=1;
	while(i<=N){
		int item=0,sum=0;
		cin>>D;
		while(D!=0){
			item+=D%2;
			D/=2;
		}
		int j=0;
		while(j<item){
			sum+=pow(2,j);
			j++;
		}
		cout<<sum<<endl;
		i++;
	}
}
