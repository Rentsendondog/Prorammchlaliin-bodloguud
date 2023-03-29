#include <iostream>
#include <math.h>
using namespace std;

main() {
    double x, s = 0;
	int n, i;
	cin >> x >> n;
	for(i = 0; i < n; i++)
	{
		x = sin(x);
		s = s + x;
	}
	cout.setf(ios::fixed);
    cout.precision(3);
	cout << s;	
}
