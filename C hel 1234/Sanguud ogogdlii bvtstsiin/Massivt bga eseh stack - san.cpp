#include <iostream>
#include <stack>

using namespace std;

main() {
	int n, i, a, x, f;
	stack <int> st;
//	stack <int> st, utga;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> a;
		st.push(a);
	}
	cin >> x;
	f = 1;
	while(!st.empty()){
		if(st.top() == x)
		{
//			utga.push(st.top());
			cout << "YES" << endl;
            
			f = 0;
			break;
		}
		st.pop();	  
	}
	if(f == 1)
	  cout << "NO" << endl;
	  
//	if(utga.empty())
//	   cout << "NO";
//	else 
//	   cout << "YES";
}
