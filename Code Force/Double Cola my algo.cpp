#include <iostream>
using namespace std;

main() {
    int n, i, k = 1, p = 0;
	cin >> n;
//	n--;
	for(i = 1; i <= n; i += k)
	{
		p++;
		if(p == 5)
		{
			p = 0;
			k = 2 * k;
		}
		if(i == n)
		   break;
	}
	if(i != n)
		p++;

	switch(p) {
		case 1: 
		   cout << "Sheldon";
		   break;
		case 2:
		   cout << "Leonard";
		   break;
		case 3:
		   cout << "Penny";
		   break;
		case 4:
		   cout << "Rajesh";
		   break;
		default:
		   cout << "Howard";
	}    		        
}
