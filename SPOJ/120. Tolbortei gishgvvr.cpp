#include <iostream>
#include <math.h>
using namespace std;

main() {
	long long a[10000];
	int n, i;
	cin >> n;
	for(i = 1; i <= n; i++)
	    cin >> a[i];  
	for(i = 3; i <= n; i++)
		a[i] += min(a[i-1], a[i-2]);
		
	cout << a[n];	
}
