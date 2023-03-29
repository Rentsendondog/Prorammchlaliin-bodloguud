#include <iostream>
#include <string.h>

using namespace std;

main() {
	char s[51];
	int n, t, i;
	cin >> n >> t;
	cin >> s;
	while(t--) {
		for(i = 0; i < n - 1; i++)
	    {
		    if(s[i] == 'B' && s[i+1] == 'G'){
		    	  swap(s[i], s[i+1]); 
		    	  i++;
			}		 
	    }
	}
	
	cout << s;
	
}
