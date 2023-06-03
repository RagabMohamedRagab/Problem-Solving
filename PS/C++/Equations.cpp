//Haapy Code
// Time Complxity O(N)
//Space Complexity O(1)
#include<bits/stdc++.h>
using namespace std;
long long  Pow(int N,int X){
	long long Mult=1,Sum=0;
  for(int i=0;i<N;i++){
    	Mult*=X;
    	if(i%2!=0){
    		Sum+=Mult;
		}
	} 
	return Sum;	
}
int main(){
	int N,X;
	cin>>X>>N;
	long long result=Pow(N,X);
	cout<<result<<endl;
 	return 0;
}
