#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <map>

using namespace std;

main() {
	int i, n;
	string s;
	map <string, int> user;  // 2 utga hoorondin holbootoi bgag
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cout << "\nHereglegchiin Neree oruulna uu:\n";
		cin >> s;
		if(user[s] == 0) // user[s] ni s string maani hed bgag tooldog
			cout << "OK\n";
		else 
			cout << s << user[s] << endl;
	    user[s]++;
	}
}
