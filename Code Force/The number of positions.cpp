#include <iostream>
using namespace std;

main() {
    int n, a, b, k, c;
    cin >> n >> a >> b;
    k = n - b;
    if(a + 1 > k)
       k = a + 1;
	c = n - k + 1;
	cout << c;
}
