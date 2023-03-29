#include <iostream>
using namespace std;

main() {
    int k = 0, n, w, i, s = 0;
    cin >> k >> n >> w;
    for(i = 1; i <= w; i++)
    {
    	s = s + k * i;
	}
    	
    if(s <= n)
        cout << 0;
    else 
        cout << s - n;

}
