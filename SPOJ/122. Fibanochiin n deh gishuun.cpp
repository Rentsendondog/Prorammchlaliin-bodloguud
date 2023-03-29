#include <iostream>
#include <math.h>
using namespace std;

int fibanochi(int x)
{
	if(x == 1 || x == 2)
	   return 1;
	else 
	   return fibanochi(x - 1) + fibanochi(x - 2);
}
main() {
	int n, i, a[46];
	cin >> n;
//	a[1] = 1;
//	a[2] = 1;
//	for(i = 3; i <= n; i++)
//	    a[i] = a[i-1] + a[i-2];
//	    
//	cout << a[n];
    n = fibanochi(n);
	cout << n;	
}
