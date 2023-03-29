#include <iostream>
using namespace std;

main() {
   int n, s;
   cin >> n;
   if(n % 2 == 0)
      n = n - 1;
   s = (n / 2 + 1) * (n / 2 + 1);
   cout << s << endl;
}
