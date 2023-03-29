#include <bits/stdc++.h>

using namespace std;

main() {
	long long n, m, p[100], i = 0, k, j;
	cin >> n;
	m = n;
	while(m > 0)
	{
		p[i++] = m % 10;
		m /= 10;
	}
	k = i;
	
	for(i = 0; i < k; i++)
		for(j = i + 1; j < k; j++)
			if(p[i] > p[j])
			   swap(p[i], p[j]);		
	for(i = 1; i < k; i++)
		if(p[0] == 0 && p[i] != 0)
			swap(p[0], p[i]);

	for(i = 0; i < k; i++)
	  cout << p[i];
}


