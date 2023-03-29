#include <iostream>
using namespace std;

main() {
    int a, b, c;
    cin >> a >> b;
    c = (a > b) * a + (a < b) * b;
    cout << c << endl;
     
}
