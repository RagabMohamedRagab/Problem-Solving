#include<bits/stdc++.h>
using namespace std;
int main(){
	long Num1,Num2,Num3,Num4,Start,end;
	cin>>Num1>>Num2>>Num3>>Num4;
	if((Num3<Num1&&Num4<Num1)||(Num3>Num2&&Num4>Num2)){
		cout<<-1<<endl;
	}else{
		if(Num1>Num3){
			Start=Num1;
		}else{
			Start=Num3;
		}
		if(Num2>Num4){
			end=Num4;
		}else{
			end=Num2;
		}
			cout<<Start<<" "<<end<<endl;
	}

	return 0;
 }
