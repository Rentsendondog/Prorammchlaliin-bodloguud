#include <iostream>
using namespace std;

main() {
    int a, b, c, s;
    cin >> a >> b >> c;
    s = (a > b && a > c) * a + (a < b && c < b) * b + (c > a && c > b) * c;
    cout << s << endl;   
}
