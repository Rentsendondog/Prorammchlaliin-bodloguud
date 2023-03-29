#include <bits/stdc++.h>

using namespace std;

main() {
	long long i = 0, k, dvn[1000], j, c;
     while(cin >> dvn[i++]!=0)
	k = i;
	for(c = 100; c >= 0; c--)
	   for(i = 0; i < k; i++)
	       if(c == dvn[i])
		     cout << i + 1 << endl;	
}

// Dev c++ deer ajillahgui
