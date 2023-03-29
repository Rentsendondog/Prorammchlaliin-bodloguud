#include <iostream>
#include <math.h>
using namespace std;

main() {
    double x = 0, y = 0, s = 1;
	int n, i;
	cin >> n;
	for(i = 1; i <= n; i++)
	{
		x = x + sin(i);
		y = y + cos(i);
		s *= y/x;
	}
	cout.setf(ios::fixed);
    cout.precision(3);
	cout << s;	
}
