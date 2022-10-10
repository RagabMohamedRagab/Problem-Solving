// Happy Code 
// Complexity Time O(N^2)
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long  x,y,count=0;
	cin>>x>>y;
	for(long int i=0;i<=x;i++){
		for(long int j=0;j<=x;j++){
		   int z=y-i-j;
		    if(z>=0&&z<=x){
		    	count++;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
