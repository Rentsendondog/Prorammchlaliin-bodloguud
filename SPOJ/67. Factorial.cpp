#include <iostream>
using namespace std;

main() {
    int n, i = 1;
    cin >> n;
    while(n > 1){
    	if(n % i == 0) 
    		n /= i++;
		else 
		  break;
	}
	if(i == 1)
	   cout << i << endl;
	else if(n == 1)
	   cout << i - 1 << endl;
	else 
	   cout << "No" << endl;
}
