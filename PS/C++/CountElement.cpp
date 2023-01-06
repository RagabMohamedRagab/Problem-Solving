#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	int A[N]={0};

	for(int i=0;i<N;i++){
		cin>>A[i];
	}
	int c=0;
	for(int a=0;a<N;a++){
		int key=A[a]+1;
		for(int b=0;b<N;b++){
			if(key==A[b]){
			  c++;
			  break;	
			}
		}
	}
	
	cout<<c<<endl;
   return 0;
}
