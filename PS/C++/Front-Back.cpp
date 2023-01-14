// Happy Code
// Time Complexity O(N)
// Space Complexity O(N)
#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	int a=0,arr1[N],arr2[N];
	while(a<N){
		cin>>arr1[a++];
	}
	int i=0,j=N-1,b=0;
	while(i<j){
		arr2[b]=arr1[i];
		b++;
		arr2[b]=arr1[j];
		b++;
		i++;
		j--;
	}
	arr2[b]=arr1[i];
	for(int x=0;x<N;x++){
		cout<<arr2[x]<<" ";
	}
	return 0;
}
