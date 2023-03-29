#include <bits/stdc++.h>

using namespace std;

main() {
	int n, i, j, too, a[10][10];
	cin >> n;
	too = n * n;
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n; j++)
		{
			a[i][j] = too;
			cout << setw(3) << too--;
		}
		cout << "\n";
	}
}


