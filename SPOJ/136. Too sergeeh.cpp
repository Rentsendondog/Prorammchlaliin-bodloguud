#include <iostream>
using namespace std;

main() {
    char a, b, c, d;
    int asca, ascb, ascc, ascd, n = 0;
    cin >> a >> b >> c >> d;
    if(a >= 48 && a <= 57)
       n = n * 10 + a - '0';
	if(b >= 48 && b <= 57)
       n = n * 10 + b - '0';
    if(c >= 48 && c <= 57)
       n = n * 10 + c - '0';
    if(d >= 48 && d <= 57)
       n = n * 10 + d - '0';
    cout << n * n;
}
