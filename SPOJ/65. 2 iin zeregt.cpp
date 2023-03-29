#include <iostream>
using namespace std;

main() {
    int n;
    cin >> n;
    while(n > 1){
    	if(n % 2 == 0) 
    		n /= 2;
		else 
		  break;
	}
	if(n == 1)
	   cout << "YES" << endl;
	else 
	   cout << "NO" << endl;

}
