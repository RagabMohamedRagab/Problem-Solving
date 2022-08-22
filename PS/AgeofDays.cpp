#include<iostream>
using namespace std;
int main(){
	int Days;
	cin>>Days;
	int years=Days/365;
	Days=Days-365*years;
	int months=Days/30;
	Days=Days-30*months;
	cout<<years<<" years"<<endl;
	cout<<months<<" months"<<endl;
	cout<<Days<<" days"<<endl;
	return 0;
	
}
