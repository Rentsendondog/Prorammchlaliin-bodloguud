#include <iostream>
using namespace std;

int min(int x, int y);
main() {
    int n, m, k;
    cin >> n >> m;
    k = min(n, m);
    (k % 2 == 0) ? cout << "Malvika" : cout << "Akshat";	       		        
}

int min(int x, int y)
{
	if(x < y)
	  return x;
	return y;
}
