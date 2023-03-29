#include <iostream>
using namespace std;

main() {
    int n, i = 1, j;
	cin >> n;
	for(j = 1; j <= n - 1; j++)
	{
		i = i + j;
		if(i > n)
		  i = i - n;
		cout << i << " ";
	}     
}
