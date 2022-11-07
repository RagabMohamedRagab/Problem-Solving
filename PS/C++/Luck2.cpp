// Happy Code
// Time Complexity O(N^2)
// Space Time || Auxiliary space O(N)
#include<bits/stdc++.h>
using namespace std;
void Swap(int &first,int &second){
	int temp=first;
	first=second;
	second=temp;
}
int main(){
	long long N;
	cin>>N;
	long long A[N]={0};
	long long a=0;
	while(a<N){
		cin>>A[a];
		a++;
	}
   for(int i=0;i<N-1;i++){
   	for(int j=0;j<N-i-1;j++){
   		if(A[j]>A[j+1]){
   			swap(A[j],A[j+1]);
		   }
	   }
   }
   long long count=0;
   for(int b=0;b<N;b++){
   	if(A[0]==A[b]){
   		count++;
	   }
   }
   cout<<count<<endl;
   if(count%2==0){
   	cout<<"Unlucky"<<endl;
   }else{
   	cout<<"Lucky"<<endl;
   }
   
   
   
	return 0;
	
}
