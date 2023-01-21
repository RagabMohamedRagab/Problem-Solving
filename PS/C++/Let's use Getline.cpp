#include<bits/stdc++.h>
using namespace std;
int main(){
	string str,con;
	getline(cin,str);
	int i=0;
	while(i<str.size()){
		if(str[i]!='\\'){
			con+=str[i];
		}else{
			break;
		}
		i++;
	}
	cout<<con<<endl;
	return 0;
}
