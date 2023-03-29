#include <iostream>
using namespace std;

main() {
    int n, k, i, j = 0;
    cin >> n >> k;
    int a[n];
    for(i = 1; i <= n; i++)
    	cin >> a[i];
    	
    for(i = 1; i <= k; i++)
    	if(a[i] != 0)
    	   j++;
    	   
    for(i = k + 1; i <= n; i++)
    	if(a[k] == a[i] && a[i] != 0)
    	   j++;
    	   
    cout << j;

}
