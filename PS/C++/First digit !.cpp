#include<iostream>
#include<cstring>
#include <sstream>
using namespace std;
int main(){
	int Num;
	string str;
	int target;
	cin>>Num;
	stringstream s;
	stringstream n;
	s<<Num;
	s>>str;
	n<<str[0];
	n>>target;
	if(target%2==0){
		cout<<"EVEN"<<endl;
	}else{
		cout<<"ODD"<<endl;
	}
	return 0;
	
}
