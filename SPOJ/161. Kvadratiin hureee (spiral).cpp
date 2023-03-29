#include <bits/stdc++.h>

using namespace std;

main() {
	int n, a[10][10], i, j, too = 1, f = 1;
	cin >> n;
	int left = 1, right = n, top = 1, bottom = n;
	while(true)
	{
		if(too > n * n)
		   break;
		for(i = left; i <= right; i++)
			a[top][i] = too++;		
		top++;
		
		if(too > n * n)
		   break;
		for(i = top; i <= bottom; i++)
            a[i][right] = too++;  
        right--;
        if(too > n * n)
		   break;
		   
        for(i = right; i >= left; i--)
           a[bottom][i] = too++;    
        bottom--;
        if(too > n * n)
		   break;
		   
        for(i = bottom; i >= top; i--)
            a[i][left] = too++;
        
        left++;
	}
	
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n; j++)
		  	cout << setw(3) << a[i][j];
		cout << "\n";
	}
	
}


