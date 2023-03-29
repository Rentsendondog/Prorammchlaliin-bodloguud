#include <iostream>
using namespace std;


long long vrjver(long long a)
{
	long long i, x = 1;
	for(i = a; i <= 2*a; i++)
	    x = x * i;
	    
	return x;
}
main() {
    long long n, i, k, s = 0, j;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
//    	k = 1;
//    	for(j = i; j <= 2*i; j++)
//    	{
//    		k = k * j;
//		}
//        
//		s = s + k;
		s = s + vrjver(i);
	}
	cout << s;        
}
