#include <iostream>
using namespace std;

main() {
    int n, s = 0, m;
    cin >> n;
    m = n;
    while(m > 0){
   	 s = s * 10 + m % 10;
   	 m /= 10;
   }
    if(s == n)
      cout << "YES" << endl;
    else 
      cout << "NO" << endl;
}
