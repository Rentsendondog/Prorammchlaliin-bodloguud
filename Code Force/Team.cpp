#include <iostream>
using namespace std;

main() {
    int n, i, j, s, p = 0;
	cin >> n;
	int a[n][3];
	for(i = 1; i <=n; i++){
		s = 0;
		 for(j = 1; j <= 3; j++){
		 	cin >> a[i][j];
		 	s += a[i][j];
		 }
		 if(s > 1)
		    p++;
	}
	cout << p << endl;			        		        
}
