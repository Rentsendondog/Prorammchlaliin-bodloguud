#include <iostream>
using namespace std;

main() {
    long long n, s;
	cin >> n;
	s = (n % 2 == 0) ? n / 2 : (-1)*(n / 2 + 1);
	cout << s << endl;		        		        
}
