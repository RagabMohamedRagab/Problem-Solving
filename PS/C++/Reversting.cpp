#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin>>N;
	int arr[N]={0};
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	int a=0;
	while(a<N){
		if(arr[a]==0){
			reverse(arr,arr+a);
			}
	
		a++;
	}

	for(int b=0;b<N;b++){
		cout<<arr[b]<<" ";
	}
	return 0;
}
