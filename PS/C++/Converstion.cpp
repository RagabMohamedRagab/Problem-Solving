#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]>='A'&&s[i]<='Z'){
			s[i]=s[i]+32;
		}else if(s[i]>='a'&&s[i]<='z'){
			s[i]=s[i]-32;
		}else{
			s[i]=' ';
		}
	}
	cout<<s<<endl;
	return 0;
}
