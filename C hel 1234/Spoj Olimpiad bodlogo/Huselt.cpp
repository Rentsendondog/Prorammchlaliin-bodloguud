#include <bits/stdc++.h>

using namespace std;


main() {
	int n, q, p[50001], a[180001], b[180001], i, k, min, max;
	cin >> n >> q;
	for(i = 1; i <= n; i++)
	    cin >> p[i];
	for(i = 1; i <= q; i++)
	    cin >> a[i] >> b[i];	
	for(k = 1; k <= q; k++)
	{
	    min = p[a[k]];
	    max = p[a[k]];
	    for(i = a[k] + 1; i <= b[k]; i++)
	    {
	    	if(p[i] < min)
	    	   min = p[i];
	    	if(p[i] > max)
	    	   max = p[i];
		}
		cout << max - min << endl;
	}
}


