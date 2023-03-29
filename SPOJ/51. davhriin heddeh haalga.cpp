#include <iostream>
using namespace std;

main() {
    int d, t, a, n, m;
    cin >> d >> t;
    cin >> a;
    n = a / t + (a % t > 0);
    m = a % t;
    if(m == 0)
       m = t;
    cout << n << " " << m << endl;
}
