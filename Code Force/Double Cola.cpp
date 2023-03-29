#include <iostream>
using namespace std;

main() {
    int n, i;
	cin >> n;
	n--;
	while(n > 4)
	{
		n -= 5;
		n /= 2;
	}
	n++;
	switch(n) {
		case 1: 
		   cout << "Sheldon";
		   break;
		case 2:
		   cout << "Leonard";
		   break;
		case 3:
		   cout << "Penny";
		   break;
		case 4:
		   cout << "Rajesh";
		   break;
		case 5 :
		   cout << "Howard";
	}    		        
}
