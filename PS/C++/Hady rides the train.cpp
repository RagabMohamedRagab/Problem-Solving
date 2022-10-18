// Happy Code
// Complexity Time O(1)
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long seat;
	cin>>seat;
	long long row=seat/4; // to get number of row of val (val/number of col without zero 1 2 3 4)
	long long col;
	if(row%2==0){
		col=seat%4; // to number of col of val (val%number of col without zero 1 2 3 4)
	}else{
		col=3-(seat%4);// to number of col of val [num of col zero 0123-(val%number of col without zero 1 2 3 4)]
	}
	cout<<row<<" "<<col<<endl;
	return 0;
}
