#include <bits/stdc++.h>

using namespace std;
//177
main() {
	int n, s[1000], s2[1000], i, a, b, c, d;
	cin >> n >> a >> b >> c >> d;
	int b1 = b, d1 = d;
	for(i = 1; i <= n; i++)
	    s[i] = i;
	
    for(i = a; i <= b1; i++)
	    s[i] = b--;
	
	for(i = 1; i <= n; i++)
	    s2[i] = s[i];
	
    for(i = c; i <= d1; i++)
    	s2[i] = s[d--]; 
	     
	    
	for(i = 1; i <= n; i++)
	   cout << s2[i] << " ";
	                    

}


