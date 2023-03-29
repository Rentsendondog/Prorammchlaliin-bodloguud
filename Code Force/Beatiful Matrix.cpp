#include <iostream>
using namespace std;

int mod(int x);

main() {
    int a[5][5], i, j, k, f;
    for(i = 0; i < 5; i++)
        for(j = 0; j < 5; j++)
            cin >> a[i][j];
            
    for(i = 0; i < 5; i++)
    {
    	f = 1;
        for(j = 0; j < 5; j++)
        {
        	if(a[i][j] == 1)
        	{
        		f = 0;
        		break;
			}
		}
		if(f == 0)
		   break;
	}
	k = mod(i - 2) + mod(j - 2);
	cout << k;				        		        
}

int mod(int x)
{
	if(x < 0)
	  return -x;
	return x;
}
