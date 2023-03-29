#include <iostream>
using namespace std;

main() {
    int n, i, max = -1000000, col;
	cin >> n;
	int a[n];
	for(i = 0; i < n; i++)
	{
		cin >> a[i];
	    if(a[i] > max)
		{
			max = a[i];
			col = i + 1;
		}	
	}
	cout << max << " " << col;  
}
