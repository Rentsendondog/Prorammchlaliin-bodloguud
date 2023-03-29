#include <iostream>
using namespace std;

int fac(int x)
{
	if(x == 1 || x == 0)
	   return 1;
	else 
	   return x * fac(x - 1);
}
main() {
    int n, i, s = 0;
	cin >> n;
	for(i = 1; i <= n; i++)
		s +=fac(i);
	cout << s;	
}
