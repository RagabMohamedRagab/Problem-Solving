#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,t="hello";
	cin>>s;
	int a=0,b=0,c=0;
	while(a<s.size()){
		if(s[a]==t[b]){
			b++;
			c++;
		}
		a++;
	}
	if(b==t.size()){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}
