#include <bits/stdc++.h>
#define REP(i, a, b) for (i = a; i < b; i++)
using namespace std;
typedef long long ll;

int main()
{
	int N, i;
	cin >> N;
	vector<int> nums(N);
	int evensum = 0;
	int oddsum = 0;
	REP(i, 0, N)
	{
		cin >> nums[i];
	}
	sort(nums.begin(), nums.end());
	REP(i, 0, N)
	{
		if (i % 2 == 0)
		{
			evensum += nums[i];
		}
		else
		{
			oddsum += nums[i];
		}
	}
	cout << abs(evensum - oddsum) << '\n';
	return (0);
}
