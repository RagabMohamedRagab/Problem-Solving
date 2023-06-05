// Happy Code
// Time Complexity O(N^2)
// Space Complexity O(N)
#include<bits/stdc++.h>
using namespace std;
void Print(int N,char c){
	for(int j=1;j<=N;j++){
		cout<<c<<" ";
	}
	cout<<endl;
}
int main(){
	int size;
	cin>>size;
    int i=1;
    while(i<=size){
    	int N;
    	char C;
     	cin>>N>>C;
     	 Print(N,C);
    	i++;
	}
	return 0;
}
