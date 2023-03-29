#include <iostream>
using namespace std;

main() {
    int n, i, a[100], x, j = 0;
	cin >> n;
	for(i = 0; i < n; i++) 
	    cin >> a[i];
	    
	cin >> x;
	for(i = 0; i < n; i++)
	{
		if(a[i] == x)
		{
			cout << "YES";
			j++;
			break;
		}
	}
	if(j == 0)
	   cout << "NO";
	
}
