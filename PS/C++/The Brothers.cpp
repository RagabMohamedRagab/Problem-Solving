#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	string FName1,LName1,FName2,LName2;
	cin>>FName1>>LName1;
	cin>>FName2>>LName2;
	transform(LName1.begin(), LName1.end(), LName1.begin(), ::toupper);
	transform(LName2.begin(), LName2.end(), LName2.begin(), ::toupper);
	if(LName1==LName2){
		cout<<"ARE Brothers";
	}else{
		cout<<"NOT";
	}
	return 0;
}
