// Time Complexity O(N)
// Space Time O(N)
#include<bits/stdc++.h>
using namespace std;
int main(){
	int size;
	cin>>size;
	int A[size]={0};
	int a=0;
	while(a<sizeof(A)/sizeof(A[0])){
		cin>>A[a];
		a++;
	}
	int x=0;
	int min;
	while(x<=size-2){
		min=x;
		int y=x+1;
		while(y<=size-1){
			if(A[min]>A[y]){
				min=y;
			}
			y++;
		}
		// Swap
		int temp=A[min];
		A[min]=A[x];
		A[x]=temp;
		x++;
	}
	int j=0;
	while(j<sizeof(A)/sizeof(A[0])){
		cout<<A[j]<<" ";
		j++;
	}
	return 0;
}
