// Happy Code 
// Complexity O(N)
#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,S,Min;
	cin>>N>>S;
	int flag=1;
	int counter=0;
	for(int i=0;i<N;i++){ // N
	   int value;  // N
	   cin>>value;  // N
	   if(flag){ // N
	   	  Min=value; 
	   	  flag=0;
	   }else{
	   	if(value<Min){
	   		Min=value;
		   }
	   }
	   counter++;
	   if(counter>=S|| i==N-1){
	   	cout<<Min<<" ";
	   	flag=1;
	   	counter=0;
	   }
	}
	return 0;
}
