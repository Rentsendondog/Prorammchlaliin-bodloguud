#include <iostream>
#include <math.h>
using namespace std;

main() {
    double s = 1;
	int n, i;
	cin >> n;
	for(i = n; i >= 1; i--)
		s = s * (1 + 1/ pow(i, 2));
	
	cout.setf(ios::fixed);
    cout.precision(3);
	cout << s;	
}
