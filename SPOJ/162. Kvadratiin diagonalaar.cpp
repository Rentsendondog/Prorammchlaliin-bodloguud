#include <bits/stdc++.h>

using namespace std;

main() {
	int n, a[10][10], too = 1, i, j, k, f = 0, t = 1;
	cin >> n;
	i = n;
	j = 1;
	a[i][j] = too++;  
	while(true)
	{
		if(f == 0){
			for(k = i - 1; k <= n; k++) 
		        a[k][j++] = too++;  
		    i = k - 1;
		    --j;
		    t++; 
		if(t == n)
		    f = (n % 2 == 1) ? 2 : 3;
		else f = 1;	 
		}
		   
		if(f == 1){
			i = n;
		    for(k = j + 1; k >= 1; k--)
			   a[i--][k] = too++;
		    j = k + 1; 
		    i++;  
		    t++;
		if(t == n)
		    f = (n % 2 == 1) ? 2 : 3;
		else f = 0;   
		}
	    
		if(f == 2){
			for(k = j + 1; k <= n; k++)
			    a[i++][k] = too++;
			j = k - 1;
			--i;
			f = 3;
		}
		
		if(n * n < too)
		   break;
		if(f == 3){
			for(k = i - 1; k >= 1; k--)
			    a[k][j--] = too++;
			i = k + 1;
			++j;
			f = 2;
		}
		if(n * n < too)
		   break;	
	}
	
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n; j++)
		  	cout << setw(3) << a[i][j];
		cout << "\n";
	}
	
}


