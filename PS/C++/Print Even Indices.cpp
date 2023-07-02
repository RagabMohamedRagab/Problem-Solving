#include<bits/stdc++.h>
using namespace std;
void PrintEvenIndices(int Arr[],int n,int i){
       if(i<n){
       	PrintEvenIndices(Arr,n,i+2);
       	cout<<Arr[i]<<" ";
	   }
       	  

}
int main(){
	int N;
	cin>>N;
	int A[N]={0};
	int a=0;
	while(a<N)
	{
		cin>>A[a];
		a++;
	}
	PrintEvenIndices(A,N,0);
	return 0;
}
