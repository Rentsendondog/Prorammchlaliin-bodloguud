#include <iostream>
#include <math.h>
using namespace std;

main() {
	long long a[10000];
	int n, i;
	cin >> n;
	a[0] = 1;  
	a[1] = 1;  // 1 -r gishguurt 1 ylgaatai marshrutaar ochno
	for(i = 2; i <= n; i++)
		a[i] = a[i-1] + a[i-2];
		
	cout << a[n];	
}
