#include <bits/stdc++.h>

using namespace std;

main() {
	int n, a[100][100] = {0}, i, j, too = 1, k, l = 0, p, d, c;
	cin >> n; 
	p = 2 * n - 1;
	i = 1;
	j = n - 1;
	c = (n * n) + (n - 1) * (n - 1);                         
	while(true)
	{
		for(k = i; k <= n; k++)	
		    a[k][++j] = too++;
		i = k;
		++l;
		if(c < too) 
		   break;
		
		for(k = i; k <= p; k++)
		    a[k][--j] = too++;
		i = k - 2; 
		p--;
		if(c < too) 
		   break;
		   
		for(k = i; k >= n; k--)
		    a[k][--j] = too++;
		i = k;
	    if(c < too) 
		   break;
		   
	    for(k = i; k > l; k--)
	        a[k][++j] = too++;
	    i = k + 1;
	    if(c < too) 
		   break;
	}
	
	for(i = 1; i <= (n * 2 - 1); i++)
	{ 
		d = (i <= n) ? (n - i) * 3 : (i - n) * 3;
	    for(int space = 1; space <= d; space++)
	        cout << " ";
	        
		for(j = 1; j <= 2* n - 1; j++)
			if(a[i][j] != 0)
		      cout << setw(3) << a[i][j];    
		cout << "\n";
	}
	
}


