#include <iostream>
#include <math.h>
using namespace std;
// 2 - r arga
//int fibanochi(int x)
//{
//	if(x == 0 || x == 1)
//	   return 1;
//	else 
//	   return fibanochi(x - 1) + fibanochi(x - 2);
//}
main() {
	long long a[1000];
	int n, i;
	cin >> n;
	a[0] = 1;
	a[1] = 1;
	for(i = 2; i <= n; i++){
		a[i] = a[i-1] + a[i-2];
		a[i] %= 10;
	}
	    
	    
	cout << a[n];
//    n = fibanochi(n);
//    n %= 10;
//	cout << n;	
}
