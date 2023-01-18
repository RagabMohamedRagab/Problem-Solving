#include <bits/stdc++.h>
using namespace std;

int main()
{
	int size, N;

	cin >> size;

	int i = 0;

	while (++i <= size)
	{
		cin >> N;

		int A[N] = { 0 };

		for (int j = 0; j < N; j++)
		{
			cin >> A[j];
		}

		if (N % 2 == 0)
		{
			int a = 0, odd = 0, even = 0;

			while (a < N)
			{
				if (A[a] % 2 == 0)
				{
					even++;
				}
				else
				{
					odd++;
				}

				a++;
			}

			if (even == odd)
			{
				cout << "0" << endl;
			}
			else if (even == 0)
			{
				int result = odd / 2;
				cout << result << endl;
			}
			else if (odd == 0)
			{
				int result = even / 2;
				cout << result << endl;
			}
		}
		else
		{
			cout << "-1" << endl;
		}
	}

	return 0;
}
