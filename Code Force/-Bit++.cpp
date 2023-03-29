#include <iostream>
using namespace std;

main() {
    int n, x = 0, i;
	cin >> n;
	char s[n][3];
	for(i = 0; i < n; i++)
	    cin >> s[i];
	
	for(i = 0; i < n; i++)
	{
		if(s[i][1] == '+')
		   x++;
		else 
		   x--;
	}
	cout << x << endl;
}
