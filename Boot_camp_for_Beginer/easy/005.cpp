#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int N, M, C;
	cin >> N >> M >> C;
	vector<int> B(M);
	vector<vector<int>> A(N, vector<int>(M));
	int count = 0;

	for (int i = 0; i < M; i++)
	{
		cin >> B[i];
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> A.at(i).at(j);
		}
	}
	int sum;
	for (int i = 0; i < N; i++)
	{
		sum = 0;
		for (int j = 0; j < M; j++)
		{
			sum += A[i][j] * B[j];
		}
		if (sum + C > 0)
		{
			count++;
		}
	}
	cout << count << '\n';
	return (0);
}
