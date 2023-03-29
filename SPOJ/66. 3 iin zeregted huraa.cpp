#include <iostream>
using namespace std;

main() {
    int n;
    cin >> n;
    while(n > 1){
    	if(n % 3 == 0) 
    		n /= 3;
		else 
		    break;
	}
	cout << n;
}
