#include <iostream>
using namespace std;

main() {
    int x, s;
    cin >> x;
    if(x <= 5)
       s = 1;
    else 
    	s = x / 5 + (x % 5 > 0);
    cout << s << endl;
   
}
