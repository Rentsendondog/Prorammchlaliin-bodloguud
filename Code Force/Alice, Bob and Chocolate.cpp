#include <iostream>

using namespace std;

main() {
	int n, i, a = 0, b = 0, sumA = 0, sumB = 0, s[100001];
	cin >> n;
	for(i = 0; i < n; i++)
	    cin >> s[i];
	    
	while(a + b < n)
	{
		if(sumA <= sumB)
		{
			sumA += s[a];
			a++;
		}
		else 
		{
			sumB += s[n - 1 - b];
			b++;
		}
	}
	cout << a << " " << b;
}
