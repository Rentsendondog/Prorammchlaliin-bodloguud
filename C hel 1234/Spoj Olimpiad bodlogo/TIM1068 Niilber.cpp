#include <bits/stdc++.h>

using namespace std;

main() {
	double n;
	cin >> n;
    if(n < 1)
	 	cout << (1 + n) / 2 * (abs(n) + 2);
	 else 
	    cout << (1 + n) / 2 * n;
}


