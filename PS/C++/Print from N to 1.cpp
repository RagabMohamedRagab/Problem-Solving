// Happy Code
// Time Complexity O(N)
// Space Complexity O(1)
#include <bits/stdc++.h>
using namespace std;
void Print(int N)
{
	if (N <= 0)
		return;
	cout << N ;
	if(N!=1){
		cout<<" ";
	}
	Print(--N);
}

int main()
{
	int N;
	cin >> N;
	Print(N);
	return 0;
}
