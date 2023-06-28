#include<bits/stdc++.h>
using namespace std;
int i=1;
void PrintFrom1TON(int N){
	if(N<i){	
	  return;
    }
    cout<<i<<endl;
    i++;
    PrintFrom1TON(N);
    
}
int main(){
	int N;
	cin>>N;
	PrintFrom1TON(N);
	return 0;
}
