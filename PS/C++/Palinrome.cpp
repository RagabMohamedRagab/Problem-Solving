// Happy Code
// Time Complexity O(N)
// Space Complexity O(1)
#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	int a=0,b=str.size()-1;
	bool flag=true;
	while(a<str.size()){
		if(a>b){
		   break;	
		}
		if(str[a]==str[b]){
			b--;
		}else{
			flag=false;
			break;
		}
		a++;
	}
	if(flag){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	return 0;
}
