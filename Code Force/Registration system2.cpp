#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <map>

using namespace std;

main() {
	int i, n;
	string s;
	map <string, int> user;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> s;
		if(user[s] == 0)
			cout << "OK\n";
		else 
			cout << s << user[s] << endl;
	    user[s]++;
	}
}
