#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n , m, k,mn, i=0;
	cin>>n>>m>>k;
    // First Select minumUn Value. n m k
    if(n<=m&&n<=k){
    	mn=n;
	}else if(m<=n&&m<=k){
		mn=m;
	}else if(k<=n&&k<=m){
		mn=k;
	}
	 
	 i=mn;
	 n-=mn;
	 m-=mn;
	 k-=mn;
	 mn = min(n / 2, k);
	i += mn;
	n -= mn;
	k-= mn;
	cout << i << endl;
	 return 0;

}
