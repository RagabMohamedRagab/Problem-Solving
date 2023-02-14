// Happy Code 
// Time Complexity O(N^2)
// Space Complexity O(1)
#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	int a=1;
	while(a<=N){
		string s;
		cin>>s;
		if(s.size()>10){
			cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
		}else{
			cout<<s<<endl;
		}
		a++;
	}
	return 0;
}
