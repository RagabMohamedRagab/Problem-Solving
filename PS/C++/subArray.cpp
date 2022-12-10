// Time Complexity O(N^2)
// Space Complexity O(N)
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=0;
	while(i<n){
		int size,result=0;
		cin>>size;
		int A[size]={0};
		for(int j=0;j<size;j++){
			cin>>A[j];
		}
		result=size;
		int a=0;
		int b=0; // 4
		while(true){
			if(a==size-1){
				break;
			}
			if(A[b]>A[b+1]){
				a++;
				b=a;
				continue;
			}
			result+=1;
			b++;
			if(b==size-1){
				a++;
				b=a;
			}
		
			
		}
			cout<<result<<endl;
		i++;
		
	}
   return 0;
}
