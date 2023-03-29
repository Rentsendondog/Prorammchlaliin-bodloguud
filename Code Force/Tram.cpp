#include <iostream>
using namespace std;

main() {
    int n, i, j, s = 0, max = 0, k;
    cin >> n;
    int a[n], b[n];
    for(i = 1; i <= n; i++)
    {
    	cin >> a[i] >> b[i];
        s = s + b[i] - a[i];
        if(max < s)
           max = s;
	}
	cout << max << endl;
				        		        
}
