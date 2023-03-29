#include <bits/stdc++.h>

using namespace std;
//175
main() {
	int n, a[100], i, k;
	cin >> n;
	k = (n % 2 == 0) ? n: n - 1;
	for(i = 1; i <= n; i++)
	    cin >> a[i];
	for(i = 1; i <= k;)
	{
		swap(a[i], a[i+1]);
		i += 2;
	}
	for(i = 1; i <= n; i++)
	    cout << a[i] << " ";                      

}


