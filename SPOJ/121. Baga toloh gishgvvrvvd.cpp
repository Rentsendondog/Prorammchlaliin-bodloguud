#include <iostream>
#include <math.h>
using namespace std;
// Dijkstra algorithm
main() {
	int a[10000], b[100], id[100];
	int n, i, j, k, d, m;
	cin >> n;
	for(i = 1; i <= n; i++)
	{
		cin >> a[i];
		b[i] = a[i];
	}  
	for(i = 3; i <= n; i++)
		a[i] += min(a[i-1], a[i-2]);
	
	id[0] = n;
	for(i = n, j = 1; i >= 1; i-=d)
	{
		k = a[i] - b[i];
		if(k == a[i - 1])
		{
			id[j++] = i - 1;
			d = 1;
		}
		else 
		{
			id[j++] = i - 2;
			d = 2;
		}
	}
	m = j - 1;
	cout << a[n] << endl;
	for(i = m - 1; i >= 0; i--)
	    cout << id[i] << " ";
}
