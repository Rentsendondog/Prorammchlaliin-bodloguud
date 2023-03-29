#include <iostream>
using namespace std;

main() {
    int n, count = 0, i;
    cin >> n;
    for(i = 0; i <= n; i++)
      count += (n - i) * i;
      
    cout << count + n;
}
