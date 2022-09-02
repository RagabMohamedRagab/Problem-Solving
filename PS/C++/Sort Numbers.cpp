#include<iostream>
using namespace std;
int main(){
	long int A,B,C;
	cin>>A>>B>>C;
	if(A>=B&&A>=C){ // A B C
		if(B<=C){
			cout<<B<<endl;
			cout<<C<<endl;
			cout<<A<<endl;
		}else{
			cout<<C<<endl;
			cout<<B<<endl;
			cout<<A<<endl;
		}
	}else if(B>=A&&B>=C){ // B A C
		if(A<=C){
			cout<<A<<endl;
			cout<<C<<endl;
			cout<<B<<endl;
		}else{
			cout<<C<<endl;
			cout<<A<<endl;
			cout<<B<<endl;
		}
	}else if(C>=A&&C>=B){ // C A B
		if(A<=B){
			cout<<A<<endl;
			cout<<B<<endl;
			cout<<C<<endl;
		}else{
			cout<<A<<endl;
			cout<<B<<endl;
			cout<<C<<endl;
		}
	}else{
    cout<<A<<endl;
	cout<<B<<endl;
	cout<<C<<endl;
	}
	cout<<endl;
	cout<<A<<endl;
	cout<<B<<endl;
	cout<<C<<endl;
	return 0;
	
}
