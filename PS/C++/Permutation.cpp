// Time Complexity O(N^2)
// Space Complexity O(N)
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int  A[n];
	int  B[n];
	for(int  i=0;i<n;i++){
		cin>>A[i];
	}
	for(int j=0;j<n;j++){
		cin>>B[j];
	}
	int  a=0;
	while(a<n){
		bool flag=false;
		int b=0;
		while(b<n){
			if(A[a]==B[b]){
				flag=true;
			}
			b++;
		}
		if(!flag){
			cout<<"no"<<endl;
			return 0;
		}
		a++;
	}
	cout<<"yes"<<endl;
}
