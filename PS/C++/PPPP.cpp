// Time Complexity O(N)
// Space Complexity O(N)
#include<bits/stdc++.h>
using namespace std;
int main(){
	int size;
	cin>>size;
	int A[size]={0};
	int i=0;
	int length=(sizeof(A)/sizeof(A[0]))-1;
	while(i<=length){
		cin>>A[i];
		i++;
	}
	int j=0;
	bool flag;
	while(j<=length){
	    if(A[j]==A[length-j]){
	       flag=true;
		}else{
			flag=false;
			break;
		}
		j++;
	}
	if(flag){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	return 0;
	
}
