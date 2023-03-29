#include <bits/stdc++.h>

using namespace std;
//174
main() {
	int n, a[100], i, k = 0;
	cin >> n;;
	for(i = 1; i <= n; i++)
	    cin >> a[i];
	for(i = 2; i <= n;i++)
		if(a[i] > a[i-1])
		   k++;
    cout << k;                      
}


