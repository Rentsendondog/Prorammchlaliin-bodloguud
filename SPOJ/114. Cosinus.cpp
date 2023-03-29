#include <iostream>
#include <math.h>
using namespace std;

main() {
    double y, s = 0;
	int n, i;
	cin >> n;
	y = n;
	for(i = n; i >= 1; i--)
		y = i - 1 + cos(y);
		
	cout.setf(ios::fixed);
    cout.precision(3);
	cout << y;	
}
