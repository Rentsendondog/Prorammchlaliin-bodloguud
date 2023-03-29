#include <bits/stdc++.h>

using namespace std;

main() {
	int n, a1 = 1, a2 = 1, k, i;
	cin >> n;
	for(i = 3; i <= n; i++)
	{
		k = a1 + a2;
		k %= 10;
		a2 = a1;
		a1 = k;
	}
	cout << k;
}

// 1 1 2 3 5 8 13 21 34 55 89
