#include <bits/stdc++.h>

using namespace std;

main() {
	int n, i, j, too = 1, a[10][10];
	cin >> n;
	for(i = 1; i <= n; i++)
		for(j = n; j >= 1; j--)
			a[i][j] = too++;
			
    for(i = 1; i <= n; i++)
    {
    	for(j = 1; j <= n; j++)
    	    cout << setw(3) << a[i][j];
    	cout << "\n";
	}
}




