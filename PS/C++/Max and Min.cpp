#include<iostream>
using namespace std;
int main(){
	long A,B,C;
	cin>>A>>B>>C;
	if(A>=B&&A>=C){ // A  B C 1 2 3 
		if(B<=C){
			cout<<B<<" "<<A<<endl;
		}else{
			cout<<C<<" "<<A<<endl;
		}
	}else if(B>=A&&B>=C){ // B A C
		if(A<=C){
			cout<<A<<" "<<B<<endl;
		}else{
			cout<<C<<" "<<B<<endl;
		}
	}else if(C>=A&&C>=B){ // C A B
		if(A<=B){
			cout<<A<<" "<<C<<endl;
		}else{
			cout<<B<<" "<<C<<endl;
		}
	}else{
		cout<<A<<" "<<B<<endl;
	}
	return 0;
}
