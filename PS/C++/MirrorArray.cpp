// Happy Code 
// Time O(N)
// Space O(N)
#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,M;
	cin>>N>>M;
	int A[N][M]; 
	 // 2  3
	int i=0,j=0;
	 // 0 1 
	 // 0 1 2  
	while(true){
		 if(i==N){ // 0==1 0==1 
		 	break;
		 }
		 cin>>A[i][j]; // 0 0 0 1 0 2 1 0 1 1 1 2
		 j++; // 1 2 3 1 2 3
		if(j==M){ // 1==2 3==3
			j=0; // 0
			i++; // 1 2
		}
	}
	int a=0,b=M-1;
	// 0     2
	while(true){
		if(a==N){ // 0==2 | 0==2 |  0==2 | 1==2 | 1==2 |  1==2 | 2==2
			break;
		}
		cout<<A[a][b]<<" "; // 0 2 | 0 1 | 0 0 | 1 2 | 1 1 | 1 0 
		b--; // 1 0 -1 1 0 -1
		if(b==-1){ // 1==-1 | -1==-1 | 1==-1 |  0==-1 | -1==-1
			b=M-1; // b=2 2
			a++; // 1 2
			cout<<endl;
		}
	}
	return 0;
}
