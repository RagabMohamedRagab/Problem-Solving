// Happy Fuken Code
// Time Compexity O(N)
// Space Complexity O(N)
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long N;
	cin>>N;
    long long arr[N]={0};
	long long i=0;
	while(i<N){
		cin>>arr[i];
		if(arr[i]<=10){
			cout<<"A["<<i<<"] = "<<arr[i]<<endl;
		}
		i++;
	}
	return 0;
}
