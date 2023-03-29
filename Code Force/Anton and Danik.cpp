#include <iostream>
using namespace std;


int main() {
    int n, i, d = 0, a = 0;
    cin >> n;
    char s[n];
    cin >> s;
    for(i = 0; i < n; i++)
    {
    	if(s[i] == 'A')
    	  a++;
    	else
    	  d++;
	}
	if(a > d)
	   cout << "Anton";
	else if(a == d)
	   cout << "Friendship";
	else 
	   cout << "Danik";
    
}

