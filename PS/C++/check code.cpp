#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	string code;
	cin>>code;
	if(x+y+1!=code.size()){
		cout<<"No"<<endl;
		return 0;
	}
	if(code[x]!='-'){
		cout<<"No"<<endl;
		return 0;
	}
	int c=0;
	for(int i=0;i<code.size();i++){
		if(code[i]>=48&&code[i]<=57&&i!=x){
			c++;
		}
	}
	if(c==x+y){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
	return 0;
}
