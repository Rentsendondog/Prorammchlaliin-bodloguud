#include <bits/stdc++.h>

using namespace std;
//179
main() {
	int n, a[100], i, f, too = 1, j;
	cin >> n;
  
	for(i = 1; i <= n; i++){
		cin >> a[i];
		for(j = 1; j < i; j++)
		{
			f = 1;
			if(a[i] != a[j])
			   f = 0; 
		}
		if(f == 0) 
		   too++;
	}  
	cout << too;
}


