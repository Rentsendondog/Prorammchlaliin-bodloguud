#include <iostream>
#include <math.h>
using namespace std;

main() {
	long long a[10000];
	int n, i;
	cin >> n;
	a[0] = 1;
	a[1] = 1;
	a[2] = 2; // a[2] = a[1] + 1;
	for(i = 2; i <= n; i++){
		a[2*i] = a[i] + 1;
//		a[2*i-1] = a[2*i] + a[i-1];
        a[2*i-1] = a[i] + a[i-1] + 1;
	}   
	cout << a[n];
}
