#include <iostream>
using namespace std;

main() {
    int n, i, s = 1, k;
	cin >> n;
	k = (n % 2 == 0) ? 2 : 1;
	for(i = k; i <= n; i += 2)
		s = s * i;
	cout << s;	
}
