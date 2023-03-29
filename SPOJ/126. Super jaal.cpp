#include <iostream>
#include <math.h>
using namespace std;

main() {
	long long a[10000];
	int n, i;
	cin >> n;
	a[0] = 1;  
	a[1] = 1;
	a[2] = 2;
	for(i = 3; i <= n; i++)
		a[i] = a[i-1] + a[i-2] + a[i-3];
		
	cout << a[n];	
}
