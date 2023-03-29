#include <bits/stdc++.h>

using namespace std;

main() {
	int p;
	cin >> p;
	stack <int> s;
	if(p == 0)
	   cout << "0";
	else {
		while(p > 0)
	    {
		   s.push(p % 2);
		   p /= 2;
	    }
	    while(!s.empty()) 
	    {
	    	cout << s.top();
	    	s.pop();
		}
	}	
}
