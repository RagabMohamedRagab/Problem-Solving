#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,p;
	cin>>x>>p;
	float rem=100-x;
	cout << fixed << setprecision(2) << 100*p/rem << endl;
	return 0;
}
