#include <iostream>
#include <math.h>
using namespace std;

main() {
    double k = 2;
	int n, i;
	cin >> n;
	for(i = n - 1; i >= 1; i--)
		k = 2 + sqrt(k);
	
	cout.setf(ios::fixed);
    cout.precision(9);
	cout << sqrt(k);	
}
