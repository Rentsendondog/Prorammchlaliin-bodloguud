#include <bits/stdc++.h>

using namespace std;
//173
main() {
	int n, a[100], i, k = 0, j;
	cin >> n;;
	for(i = 1; i <= n; i++)
	    cin >> a[i];
	i = 1;
	for(i = 1; i <= n - 1;)
	{
		j = i + 1;
		while(a[i] < a[j])
		{
			if(j == n)
				break;
			j++;
		}
		k++;
		i = j;
	} 
	cout << k;                     
}


