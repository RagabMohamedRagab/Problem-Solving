// Nice Code
// Complexity Time N + N =2N So   
// O(N)
#include<bits/stdc++.h>
using namespace std;
int main(){
	int A,B,Max_num;
	cin>>A>>B;
	if(A>=B){
		int i=1;
		while(i<=A){
			if(A%i==0&&B%i==0){
				Max_num=i;
			}
			i++;
		}
		
	}else{
		int j=1;
		while(j<=B){
			if(A%j==0&&B%j==0){
				Max_num=j;
			}
			j++;
		}
	}
	cout<<Max_num<<endl;
	
	return 0;
}
