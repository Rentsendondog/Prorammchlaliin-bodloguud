#include <iostream>
using namespace std;

main() {
    int n, i, j;
    cin >> n;
    int a[n][3];
    for(i = 1; i <= n; i++)
        for(j = 0; j < 3; j++)
            cin >> a[i][j];
    int s[3] = {0};         
    for(j = 0; j < 3; j++){
    	for(i = 1; i <= n; i++)
    		s[j] += a[i][j];
	}
      
	if(s[0] == 0 && s[1] == 0 && s[2] == 0)  
	   cout << "YES";
	else 
	   cout << "NO";
        
            
       
}
