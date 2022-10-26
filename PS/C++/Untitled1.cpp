//Time Complexity O(N)
// Space Time O(N)
#include<bits/stdc++.h>
using namespace std;
int main(){
 int N,s,index=-1;
 cin>>N;
 int arr[N]={0};
 for(int i=0;i<N;i++){
 	cin>>arr[i];
 }
 cin>>s;
 for(int j=0;j<N;j++){
 	if(arr[j]==s){
 		index=j;
 		break;
	 }
 }
 if(index!=-1){
 	cout<<index<<endl;
 }else{
 	cout<<index<<endl;
 }
 return 0;
 
}
