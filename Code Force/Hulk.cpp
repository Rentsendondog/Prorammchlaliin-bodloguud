#include <iostream>
using namespace std;

main() {
    int n, i;
	cin >> n;
	for(i = 1; i <= n; i++)
	{
		if(i == n)
		{
			if(i % 2 == 0)
			   cout << "I love it";
			else 
			   cout << "I hate it";
		}
		else
		{
		    if(i % 2 == 0)
			   cout << "I love that ";
			else 
			   cout << "I hate that ";	
		}	
	}       		        
}
