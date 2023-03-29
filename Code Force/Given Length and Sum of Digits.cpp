#include <iostream>
#include <math.h>

using namespace std;

main() {
	int m, s, i, k, a;
	cin >> m >> s;
	if(s > m * 9 || m < 1 || m > 1 && s < 1)
	   cout << "-1 -1";
	else 
	{
		for(i = m - 1, k = s; i >= 0; i--)
		{
			a = max(0, k - 9 * i);
			if(a == 0 && i == m - 1 && k > 0)
			   a = 1;
			cout << a;
		    k = k - a;
		}
		cout << " ";
		for(i = m - 1, k = s; i >= 0; i--)
		{
		    a = min(9, k);
		    cout << a;
		    k = k - a;
		}
	}

}
