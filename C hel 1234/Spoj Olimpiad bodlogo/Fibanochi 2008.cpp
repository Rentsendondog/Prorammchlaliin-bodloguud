#include <bits/stdc++.h>

using namespace std;

main() {
	int n, i, dp[10000];
	cin >> n;
	dp[1] = 1;
	dp[2] = 1;
	for(i = 3; i <= (n % 60); i++)
	{
		dp[i] = dp[i-1] + dp[i-2];
		dp[i] %= 10;
	}
	cout << dp[n % 60];
}


