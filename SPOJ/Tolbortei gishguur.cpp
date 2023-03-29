#include <iostream>
using namespace std;

main() {
    int n, i, k;
	cin >> n;
	int a[n]; 
	for(i = 1; i <= n; i++) 
	    cin >> a[i];
	
	for(i = 3; i <= n; i++){
		a[i] = a[i] + min(a[i-1], a[i-2]);
		cout << i;
	}
			
		
	cout << "\n" << a[n];        
}
