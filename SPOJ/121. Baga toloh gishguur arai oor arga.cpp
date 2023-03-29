#include <iostream>
#include <math.h>
using namespace std;
// Dijkstra algorithm
main() {
	long long a[10000], c[100], id[100];
	int n, i, j = 0;
	cin >> n;
	for(i = 1; i <= n; i++)
		cin >> a[i];
  
	for(i = 3; i <= n; i++)
	{
		if(a[i -1] < a[i - 2])
		{
			a[i] += a[i - 1];
			c[i] = i - 1;
		}
		else
		{
			a[i] += a[i - 2];
			c[i] = i - 2;
		}
	}
	i = n;
	id[0] = n;
	while(i > 2)
	{
		id[++j] = c[i];
		i = c[i];
	}
	cout << a[n] << endl;
	for(i = j; i >= 0; i--)
	    cout << id[i] << " ";
}
