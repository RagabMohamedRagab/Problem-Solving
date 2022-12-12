#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,M;
	cin>>N>>M;
	int A[N][M];
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			cin>>A[i][j];
		}
	}
	// Search Item 
	int item;
	bool flag=false;
	cin>>item;
	for(int a=0;a<N;a++){
		for(int b=0;b<M;b++){
			if(A[a][b]==item){
				flag=true;
				break;
			}
		}
	}
	if(flag){
		cout<<"will not take number"<<endl;
	}else{
		cout<<"will take number"<<endl;
	}
	
}
