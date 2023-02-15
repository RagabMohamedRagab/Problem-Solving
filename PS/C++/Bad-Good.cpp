#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin >> N;
	// int v1=('0'-'0')+('1'-'0')+('0'-'0');
	// int v2=('1'-'0')+('0'-'0')+('1'-'0');
	int a = 1;
	while (a <= N)
	{
		string s;
		bool flag = false;
		cin >> s;
		for (int b = 0; b < s.size(); b++)
		{
			//	int col=(s[b]-'0')+(s[b+1]-'0')+(s[b+2]-'0');
			if ((s[b] == '0' && s[b + 1] == '1' && s[b + 2] == '0') || (s[b] == '1' && s[b + 1] == '0' && s[b + 2] == '1'))
			{
				flag = true;
			}
		}

		if (flag)
		{
			cout << "Good" << endl;
		}
		else
		{
			cout << "Bad" << endl;
		}

		a++;
	}

	return 0;
}
