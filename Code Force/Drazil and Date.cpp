#include <iostream>
using namespace std;

int mod(int x);
main() {
    long long  a, b, s, k;
	cin >> a >> b >> s;
	k = mod(a) + mod(b);  
	(k == s || (k <= s && (s - k) % 2 == 0)) ? cout << "Yes" : cout << "No";	    	        
}

int mod(int x)
{
	if(x < 0)
	  return -x;
	return x;
}
