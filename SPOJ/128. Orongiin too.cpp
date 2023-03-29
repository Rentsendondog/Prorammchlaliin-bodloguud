#include <iostream>
using namespace std;

main() {
    int n, j = 0;
    cin >> n;
    while(n > 0){
    	n /= 10;
    	j++;
	}
	cout << j;
	        
}
