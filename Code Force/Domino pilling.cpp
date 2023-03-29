#include <iostream>
using namespace std;

main() {
    int m, n, i, k = 0;
    cin >> m >> n;
    for(i = 2; i <= m * n; i+=2)
    	k++;
	cout << k;
}
