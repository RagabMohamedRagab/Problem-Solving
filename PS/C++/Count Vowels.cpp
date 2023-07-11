#include <bits/stdc++.h>
using namespace std;
void Vowels(string s, int len, int count)
{
	if (len < 0)
	{
		cout << count << endl;
		return;
	}

	if (s[len] == 'a' || s[len] == 'A' || s[len] == 'o' || s[len] == 'O' || s[len] == 'u' || s[len] == 'U' || s[len] == 'e' || s[len] == 'E' || s[len] == 'i' || s[len] == 'I')
	{
		count++;
	}

	len--;
	Vowels(s, len, count);

}

int main()
{
	string S;
	getline(cin,S);
	Vowels(S, S.size() - 1, 0);
	return 0;
}
