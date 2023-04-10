#include<bits/stdc++.h>
using namespace std;
int main(){
	int size;
	int Frq[26]={0};
	cin>>size;
	int a=0;
	while(++a<=size){
		char c;
		cin>>c;
		++Frq[(int)c-'a'];
	}
	for(int i=0;i<=25;i++){
		while(Frq[i]!=0){
			cout<<(char)(i+97);
			Frq[i]--;
		}
	}
	return 0;
}
