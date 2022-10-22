#include<iostream>
using namespace std;
int res[1000005];
int main(){
	long long count,c=0;
	cin>>count;
	for(int i=0;i<count;i++){
		long long n1,n2;
		cin>>n1>>n2; // 6 4
		if(n1*(n1+1)/2<n2){ // 6*7/2
			cout<<"-1";
		}else{
			long long j=n1;
			long long sum=0; // j=6
			for(int j=n1;j>=1;j--){
				if(sum+j<=n2){
					sum+=j;
					res[c]=j;
					c++;
				}
			}
	}
		for(int a=0;a<c;a++){
			cout<<res[a]<<" ";
		}
	    cout<<endl;
		c=0;
	}
	return 0;
}
