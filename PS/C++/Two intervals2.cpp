#include<iostream>
using namespace std;
int main(){
	long int A,B,C,D;
	cin>>A>>B>>C>>B;
	if(A<=B&&A<=C&&A<=D&&C>=A&&C<=B&&C<=D&&B>=A&&B>=C&&B<=D&&D>=A&&D>=B&&D<=C){
		cout<<B<<" "<<C<<endl;
	}else{
		cout<<-1<<endl;
	}
	return 0;
}
