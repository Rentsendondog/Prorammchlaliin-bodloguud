#include <iostream>
using namespace std;

main() {
    int n, i, m, k;
	cin >> n >> k;
	long long dp[n];
	
	dp[0] = 1;
	dp[1] = (1 != k) ? 1 : 0;
	dp[2] = (2 != k) ? dp[1] + dp[0] : 0;
	
	for(i = 3; i <= n; i++)
		dp[i] = (i != k) ? dp[i-1] + dp[i-2] : 0;
	
	cout << dp[n];
	        
}
