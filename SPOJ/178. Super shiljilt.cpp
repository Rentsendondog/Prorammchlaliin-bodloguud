#include <bits/stdc++.h>

using namespace std;
//178
main() {
	int n, a[100000], i, k, t;
	cin >> n;
	for(i = 1; i <= n; i++)
	    cin >> a[i];
	cin >> k;
	if(k >= 0) {   //aragsh shiljih
	    while(k--){
            t = a[n];
            for(i = n; i >= 1; i--)
		        swap(a[i], a[i-1]);
	        a[1] = t;
	    }
	}
	else
	{   //uragsh shiljih
		while(k++){    
            t = a[1];
            for(i = 1; i <= n; i++)
		        swap(a[i], a[i+1]);
	        a[n] = t;
	    }
	}
      
	for(i = 1; i <= n; i++)  
	    cout << a[i] << " ";                 

}


