#include <iostream>
using namespace std;

main() {
    int t, s, x, j = 0, i, f;
    cin >> t >> s >> x;
    if(t == x)
    {
    	cout << "YES";
    	return 0;
	}
    for(i = t; i <= x; i += s)
    {
        if(i == t) {
           f = 0;
           i += s;
           s--;
		}
		if(f == 0){
		    if(i == x) {
        	    j++;
        	    cout << "YES";
                return 0;
		    }
		    i++;
		    if(i == x) {
        	    j++;
        	    cout << "YES";
                return 0;
		    }
	    }
	}
	   cout << "NO";
	   return 0;

}
