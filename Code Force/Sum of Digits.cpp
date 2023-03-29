#include <iostream>

using namespace std;

long long Sum(long long n)
{
	long long s = 0;
	while(n > 0)
	{
		s = s + n % 10;
		n = n / 10;
	}
	return s;
}
main() {
	long long n, j = 0;
	cin >> n;
	while(n > 9)
	{
		n = Sum(n);
		j++;
	}
	cout << j;
	
	
	
	
	

}
