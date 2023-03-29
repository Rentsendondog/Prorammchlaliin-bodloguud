#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

main() 
{
    char a[10000][33];
	long long n, t;
	int i, j, f;
	cin >> n;
	for(i = 0; i < n; i++)
	    cin >> a[i];
	for(i = 0; i < n; i++)
	{
		if(i == 0)
            cout << "OK" << endl;
		   f = 1;
		   t = 0;
			for(j = i-1; j >= 0; j--)
			{
				if(strcmp(a[i], a[j]) == 0)
				{
					t++; 
					f = 0;
				}
				if(j == 0 && f == 0)
				{
					cout << a[i] << t << endl;
					break;
				}
			}
			if(f == 1 && i != 0)
				cout << "OK" << endl;
	}		
}

