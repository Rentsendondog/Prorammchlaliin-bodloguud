#include <bits/stdc++.h>

using namespace std;
//179 dev c deer neh sain ajillahgui
main() {
	int a[101], i = 0, f, j, too = 0;
  		
	while(cin >> a[i]){
		f = 0;
		for(j = 0; j < i; j++)
			if(a[i] == a[j])
			  f = 1;
		if(f == 0){
		   cout << a[i] << " ";
		   too++;
		}
		 i++;		   
	}
	cout << "\n" << too;
}


