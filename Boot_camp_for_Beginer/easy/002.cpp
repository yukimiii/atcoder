#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int n, min;
	cin >> n;
	vector<int> live(n);
	min = 999999999;
	for (int i = 0; i < n; i++)
	{
		cin >> live[i];
	}
	int sum;
	int i;
	for (i = 0; i < 100; i++)
	{
		sum = 0;
		for (int j = 0; j < n; j++)
		{
			sum += (live[j] - i) * (live[j] - i);
		}
		if (sum < min)
		{
			min = sum;
		}
		else
		{
			break;
		}
	}
	cout << min << '\n';
	return (0);
}
