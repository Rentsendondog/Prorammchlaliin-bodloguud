#include <bits/stdc++.h>

using namespace std;

main() {
	int n, a[10][20] = {0}, i, j, too = 1, k, l = 0, p, m;
	cin >> n; 
	p = 2 * n - 1;
	m = n;
	i = 1;
	j = n;                            
	while(true)
	{
		for(k = i; k <= m; k++, j--)
		   a[k][j] = too++;
		i = k - 1; 
		++j;
		++l;
		if(n * n < too)
		   break;
		for(k = j + 1; k <= p; k++)
		    a[i][k] = too++;
		p = p - 2;
		j = k - 1;
		--j;
		if(n * n < too)
		   break;
		for(k = i - 1; k > l; k--, j--)
		    a[k][j] = too++;
		i = k + 1; 
		m--;
		if(n * n < too)
		   break;		
	}
	
	for(i = 1; i <= n; i++)
	{   
	    for(int space = 1; space <= ((n - i) * 3); space++)
	        cout << " ";
	        
		for(j = 1; j <= 2* n - 1; j++)
			if(a[i][j] != 0)
		      cout << setw(3) << a[i][j];    
		cout << "\n";
	}
	
}


