#include <iostream>
#include <stack>
#include <queue>

using namespace std;

main() {
	char a;
	int n, t, m, i;
	queue <char> q1, q2;
	cin >> n >> t;
	m = n;
	while(m--)
	{
		cin >> a;
		q1.push(a);
	}
	while(t--){
		for(i = 0; i < n; i++)
	    {
		    a = q1.front();
		    q1.pop();
		    if(a == 'B' && q1.front() == 'G')
		    {
			   q2.push(q1.front());
			   q2.push(a);
			   q1.pop();
			   i++;
		    }
		    else
		       q2.push(a);
	    }
	    swap(q2, q1);
	}
	
	for(i = 0; i < n; i++)
	{
		cout << q1.front();
		q1.pop();
	}
	
}
