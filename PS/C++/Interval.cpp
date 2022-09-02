#include<iostream>
using namespace std;
int main(){
	double x;
	cin>>x;
	if(x>=0&&x<=25){
		cout<<"Interval [0,25]"<<endl;
	}else if(x>25&&x<=50){
	    cout<<"Interval (25,50]"<<endl;		
	}else if(x>50&&x<=75){
		cout<<"Interval (50,75]"<<endl;
	}else if(x>75&&x<=100){
		cout<<"Interval (75,100]"<<endl;
	}else{
		cout<<"Out of Intervals"<<endl;
	}
	return 0;
}
