#include <bits/stdc++.h>
using namespace std;

//142
main() {
	long long n, m, p[1000], k, n2, i, a;
	int j = 0;
	cin >> n >> m >> k;
	
	for(i = n; i <= m; i++){
		a = i;
		while(a > 0){
			p[j++] = a % 10;
			a /= 10;
		}
	}
	
	n2 = j;
	sort(p, p+n2);
	reverse(p, p+n2);	   
	if(n2 <= k)
	   cout << "-1";
    else cout << p[k-1];		
}



