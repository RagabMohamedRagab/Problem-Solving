#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int A[],int l,int r,int search){
	while(l<=r){
	int mid=l+(r-l)/2;
	if(A[mid]==search){
		return mid;
	}else if(A[mid]<search){
		l=mid+1;
	}else{
		r=mid-1;
	}
}
	return -1;
}
int main(){
	int N,Q;
	cin>>N>>Q;
	int A[N]={0};
	for(int i=0;i<N;i++){
		cin>>A[i];
	}
	sort(A,A+N);
	int b=1;
	while(b<=Q){
		int x;
		cin>>x;
	   int result=BinarySearch(A,0,N-1,x);
	   if(result==-1){
	   	  cout<<"not found"<<endl;
	   }else{
	   	cout<<"found"<<endl;
	   }
	   b++;
	}
	return 0;
}
