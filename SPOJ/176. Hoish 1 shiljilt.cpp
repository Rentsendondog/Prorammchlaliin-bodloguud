#include <bits/stdc++.h>

using namespace std;
//176
main() {
	int n, a[100],b[100], i, k;
	cin >> n;
	for(i = 1; i <= n; i++)
	    cin >> a[i];
//	for(i = 1; i <= n;i++)
//		b[i+1] = a[i];
//	b[1] = a[n];
//	for(i = 1; i <= n; i++)
//	    cout << b[i] << " ";  
    k = a[n];
    for(i = n; i >= 1; i--)
	{
		swap(a[i], a[i-1]);
	}
	a[1] = k;
	for(i = 1; i <= n; i++)  
	    cout << a[i] << " ";                 

}


