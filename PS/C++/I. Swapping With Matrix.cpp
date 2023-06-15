#include <bits/stdc++.h>
using namespace std;
int N;
int Arr[10][10];
void SwapRow(int R, int C)
{
	int A1[N];
	for (int a = 0; a < N; a++)
	{
		A1[a] = Arr[R][a];
	}

	for (int b = 0; b < N; b++)
	{
		Arr[R][b] = Arr[C][b];
		Arr[C][b] = A1[b];
	}
}

void SwapColumn(int R, int C)
{
	// C1= 2  C2=1
	int A1[N];	// {3,6,9}

	for (int a = 0; a < N; a++)
	{
		A1[a] = Arr[a][R];	//[0][2][1][2]
	}

	for (int b = 0; b < N; b++)
	{
		Arr[b][R] = Arr[b][C];
		//[0][2]=[0][1]
		Arr[b][C] = A1[b];
		//[0][1]
	}
}

int main()
{
	int X, Y;
	cin >> N >> X >> Y;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> Arr[i][j];
		}
	}

	SwapRow(X - 1, Y - 1);


	SwapColumn(X - 1, Y - 1);
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << Arr[i][j] << " ";
		}

		cout << endl;
	}

	return 0;
}
