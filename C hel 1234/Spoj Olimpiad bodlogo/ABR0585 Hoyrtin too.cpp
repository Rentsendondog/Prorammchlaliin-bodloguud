#include <bits/stdc++.h>

using namespace std;

main() {
	long long p, i = 0, k;
	cin >> p;
	long long a[100000];
	if(p == 0)
	   cout << "0";
	else {
		while(p > 0)
	    {
		   a[i++] = p % 2;
		   p /= 2;
	    }
	   k = i;
	   for(i = k - 1; i >= 0; i--)
	       cout << a[i]; 
	}
	
	
}
