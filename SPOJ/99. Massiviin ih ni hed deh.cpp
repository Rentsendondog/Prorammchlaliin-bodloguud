#include <iostream>
using namespace std;

main() {
    int n, i, max = -100000, j = 1;
	cin >> n;
	int a[n];
	for(i = 0; i < n; i++)
	{
		cin >> a[i];
	    if(a[i] > max)
		{
			max = a[i];
			j = 1;	
		}
		else if(a[i] == max)
		{
		    j++;	
	    }
	}
	cout << max << " " << j;  
}
