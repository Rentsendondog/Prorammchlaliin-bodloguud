#include <iostream>
#include <queue>

using namespace std;

main() {
	char a;
	int t, n, i, k;
	cin >> t;
	k = t;
	queue <char> q1;
	while(t--)
	{  
	    cin >> a;
		q1.push(a);	
	}
	cin >> n;
	while(n--)
	{
		q1.push(q1.front());
		q1.pop();
	}
	t = k;
	while(t--)
	{
		cout << q1.front();
		q1.pop();
	}
}
