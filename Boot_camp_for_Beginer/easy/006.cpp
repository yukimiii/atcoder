#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll H, W;
	cin >> H >> W;
	ll ans;

	if (H != 1 && W != 1)
	{
		ans = (H * W + 1) / 2;
		cout << ans << '\n';
	}
	else
	{
		cout << 1 << '\n';
	}
	return (0);
}
