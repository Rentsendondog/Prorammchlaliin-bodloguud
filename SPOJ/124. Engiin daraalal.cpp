#include <iostream>
#include <math.h>
using namespace std;

//int daraalal(int x){
//	
//	if(x == 0 || x == 1)
//	   return 1;
//	else {
//		if(x % 2 == 0)
//		   return daraalal(x/2) + daraalal(x/2 -1);
//		else 
//		   return daraalal(x/2) - daraalal(x/2 -1);
//	}
//
//}

main() {
	long long a[1000];
	int n, i;
	cin >> n;
	a[0] = 1;
	a[1] = 1;
	for(i = 2; i <= n; i++){
		if(i % 2 == 0)
		   a[i] = a[i/2] + a[i/2 - 1];
		else 
		   a[i] = a[i/2] - a[i/2 - 1];
	}   
	cout << a[n];
//	n = daraalal(n);
//	cout << n;
}
