// Happy Code
// Complexity Time O(N^2)
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,M,Max=0,Min=0,Sum=0;
	for(int i=1;;i++){
		cin>>N>>M;
		Sum=0;
		if(N<=0||M<=0){
			return 0;
		}else{
			if(N>=M){
				Max=N;
				Min=M;
			}else{
				Max=M;
				Min=N;
			}
			int j=Min;
			while(j<=Max){
				cout<<j<<" ";
				Sum+=j;
				j++;
			}
			cout<<"sum ="<<Sum<<endl;
		}
	}
	return 0;
}
