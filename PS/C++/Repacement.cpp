// Happy Fuken Code 
// Time Complexity O(N)
// Space Complexity O(N)
#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	int arr[N]={0};
    int i=0;
    while(i<N){
    	cin>>arr[i];
    	if(arr[i]>0){
    		arr[i]=1;
		}else if(arr[i]<0){
			arr[i]=2;
		}else{
			arr[i]=0;
		}
		cout<<arr[i]<<" ";
		i++;
	}
	return 0;
} 
