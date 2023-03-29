#include <iostream>
using namespace std;

main() {
    int n, i, k = 0;
    cin >> n;
    char s[n];
    cin >> s;
    for(i = 0; i < n; i++)
    {
    	if(s[i] == s[i+1])
    	    k++;
	}
	cout << k << endl;				        		        
}
