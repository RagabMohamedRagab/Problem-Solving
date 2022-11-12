// Time Complexity O(N^2)
// Space Complexiy O(1 )
#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	int a=1;
	while(a<=N){
		int size;
		cin>>size;
		int A[size]={0};
		for(int x=0;x<size;x++){
			cin>>A[x];
			cout<<A[x]<<" ";
		}
		int i=0,z=0,ma;
		while(true){
			if(z==size-1){
				break;
			}
			if(i==z){
				ma=max(A[i],A[i+1]);
			}else{
				ma=max(ma,A[i+1]);
			}
			cout<<ma<<" ";
			i++;
			if(i==size-1){
				z++;
				i=z;
			}
		}
		a++;
		cout<<endl;
	}
	return 0;
}
