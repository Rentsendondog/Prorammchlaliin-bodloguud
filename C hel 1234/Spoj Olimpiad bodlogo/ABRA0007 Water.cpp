#include <bits/stdc++.h>

using namespace std;

main() {
	double v1, v2, t1, t2;
	cin >> v1 >> t1 >> v2 >> t2;
	cout << fixed;
    cout << setprecision(1);
	cout << (v1 * t1 + v2 * t2) / (v1 + v2) << endl << v1 + v2;	
}

/*
   t = (v1 * t1 + v2 * t2 +...vn * tn) / (v1 + v2 + ... + vn)
   t* = (v1 * t1 + v2 * t2) / (v1 + v2)
*/
