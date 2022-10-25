// Happy Code
//Time Complexity O(N)
// Space Complexity =3*4+N*4 = 4N+12 = O(N)
#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,total=0;
	cin>>N;
	int arr[N];
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
		cin>>arr[i];
		total+=arr[i];
	}
	cout<<abs(total)<<endl;
	return 0;
}
