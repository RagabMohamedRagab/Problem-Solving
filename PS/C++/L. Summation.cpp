// Happy Code
// Time Complexity O(N)
// Space Complexity O(N)
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll Summation(ll A[], int N)
{
	if (N < 0)
	{
		return 0;
	}

	return A[N] + Summation(A, N - 1);
}

int main()
{
	int N;
	cin >> N;
	ll Arr[N] = { 0 };

	for (int i = 0; i < N; i++)
	{
		cin >> Arr[i];
	}

	cout << Summation(Arr, N - 1) << endl;
	return 0;
}
