#include <bits/stdc++.h>

using namespace std;
//182 dev c deer neh sain ajillahgui
main() {
	int a[1001], i = 0, n, max = 0, min = 0;	
	while(cin >> a[i]){
		 i++;		   
	}
	n = i;
	for(i = 1; i < n; i++)
	{
		if(a[i] > a[i-1] && a[i] > a[i+1])
		    max++;
		if(a[i] < a[i-1] && a[i] < a[i+1])
		    min++;
	}
	cout << max << " " << min;
}


