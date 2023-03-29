#include <iostream>
using namespace std;


int main() {
    int a, b, x, y, k;
    cin >> a >> b;
    x = min(a, b);
    k = max(a, b);
    y = (k - x == 1) ? 0 : (k - x) / 2;
    cout << x << " " << y;
}

