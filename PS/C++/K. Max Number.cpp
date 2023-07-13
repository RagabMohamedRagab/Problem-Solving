// Happy Code
// Time Complexity O(N)
// Space Complexity O(1)
#include <bits/stdc++.h>
using namespace std;
int MaxNumber(long long A[], long long N, int max)
{
	if (N < 0)
	{
		return max;
	}
	else
	{
		if (A[N] > max)
		{
			max = A[N];
		}

		MaxNumber(A, N - 1, max);
	}
}

int main()
{
	long long N;
	int max;
	cin >> N;
	long long Arr[N] = { 0 };

	for (int i = 0; i < N; i++)
	{
		cin >> Arr[i];
	}

	cout << MaxNumber(Arr, N - 1, max);
	return 0;
}
