#include <bits/stdc++.h>

using namespace std;

main() {
	int i, sum, j = 0;
	string s;
	cin >> s;
	while(s.length() > 1)
	{
		sum = 0; 
		for(i = 0; i < s.length(); i++)
		    sum += (s[i] - '0');  // '0' == 48
		s = to_string(sum);
		j++;
	}
	cout << j;
	
}
