#include <iostream>
using namespace std;

main() {
    int d, o, t, k, n, m, a;
    cin >> d >> o >> t;
    cin >> a;
    int r = a % (d * t);
    k = a / (d * t) + (r > 0);
    n = r / t + (r % t > 0);
    m = r % t;
    if(n == 0)
       n = d;
    if(m == 0)
       m = t;
    cout << k << " " << n << " " << m << endl;
}
