#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int A[9];
	int N;
	for (int i = 0; i < 9; i++)
	{
		cin >> A[i];
	}
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		for (int j = 0; j < 9; j++)
			if (num == A[j])
			{
				A[j] = 0;
			}
	}
	if (A[0] + A[1] + A[2] == 0 || A[3] + A[4] + A[5] == 0 || A[6] + A[7] + A[8] == 0 ||
		A[0] + A[3] + A[6] == 0 || A[1] + A[4] + A[7] == 0 || A[2] + A[5] + A[8cp] == 0 ||
		A[0] + A[4] + A[8] == 0 || A[2] + A[4] + A[6] == 0)
	{
		cout << "Yes" << '\n';
	}
	else
	{
		cout << "No" << '\n';
	}

	return (0);
}
