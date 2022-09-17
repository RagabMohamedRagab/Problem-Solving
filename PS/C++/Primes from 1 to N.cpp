// Nice code
// Complexity Time O(N^2)
#include<bits/stdc++.h>
using namespace std;
int main(){
	int N; // 10
	cin>>N; 
	int i=2;  // i 2 3 4 5 6 7 8 9 
	while(i<=N){ // if 2<10  3<10 4<10 5<10 6<10 7<10 8<10 9<10  
		bool IsPrime=true;
		for(int j=2;j<i;j++){  
				if(i%j==0){ 
					IsPrime=false;
					break;
				}
		}
		if(IsPrime){
			cout<<i<<" "; // 2 3 5 7  
		}
		i++; //  3 4 5 6 7 8 9 
	}
	return 0;
}
