// Ramdam Karem 
// Time Complexity O(N^2)
// Space Complexity O(N)
#include<bits/stdc++.h>
using namespace std;
int main(){
	int size,max;
	bool flag=true;
	string s;
	// 5
	cin>>size;
	// ababb
	cin>>s;	
	int a=0;
	while(a<size){
		int count=0; // 0
		for(int b=a;b<size;b++){ // 0 1 3  1
			 if(s[b]==s[b+1]){ // a==b b==a  b==a
			 	 continue; 
			 }else{
			 	count++;
			 }
		}
		if(flag){
			max=count;
		   flag=false;
		}else{
			if(count>=max){
				max=count;
			}
		}
		a++;
	}
	cout<<max<<endl;
	return 0;
}
