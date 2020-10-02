#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool is_squere(int N)
{
	int r = (int)floor(sqrt((long double)N));
	return (r * r) == N;
}
int main()
{
	int a, b, c;
	cin >> a >> b;
	if (b < 10)
	{
		c = a * 10 + b;
	}
	else if (b == 100)
	{
		c = a * 1000 + b;
	}
	else
	{
		c = a * 100 + b;
	}
	if (is_squere(c))
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return (0);
}
