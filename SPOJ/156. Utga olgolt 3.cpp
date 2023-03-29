#include <bits/stdc++.h>

using namespace std;

main() {
	int n, i, j, too, a[10][10], f;
	cin >> n;
	too = n;
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n; j++)
		{
			a[i][j] = too;
			cout << setw(3) << too;
			if(i % 2 == 1){
				too--;
				f = 1;
			}   
			else{
				 too++;
				 f = 0;
			}	  	
		}
		if(f == 0)
			too += n - 1;
		else
		    too += n + 1;
		cout << "\n";
	}
}


