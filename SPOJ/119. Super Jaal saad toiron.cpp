#include <iostream>
using namespace std;

main() {
    int n, i, m, k;
	cin >> n >> m;
	long long dp[n];
	for(i = 1; i <= m; i++){
		cin >> k;
		dp[k] = -1;
	}
	
	dp[0] = 1;
	dp[1] = (dp[1] != -1) ? 1 : 0;
	dp[2] = (dp[2] != -1) ? dp[1] + dp[0] : 0;
	
	for(i = 3; i <= n; i++)
		dp[i] = (dp[i] != -1) ? dp[i-1] + dp[i-2] + dp[i-3] : 0;
	
	cout << dp[n];
	        
}
