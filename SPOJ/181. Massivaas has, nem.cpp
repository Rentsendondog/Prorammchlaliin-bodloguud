#include <bits/stdc++.h>

using namespace std;
//181
main() {
	long long n, a[101], i, del, add, x, t;
	cin >> n;
	for(i = 1; i <= n; i++){
		cin >> t;
		a[i] = t;
	}
	    
	cin >> del;
	cin >> add >> x;	 
	for(i = del + 1; i <= n; i++)
		 a[i-1] = a[i];
	
	for(i = add; i <= n - 1; i++)
		a[i+1] = a[i];
	a[add] = x;	
	   
	for(i = 1; i <= n; i++)  
	    cout << a[i] << " ";
	                

}


