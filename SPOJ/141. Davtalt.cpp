#include <bits/stdc++.h>

using namespace std;

//141
main() {
	long long n, m, p[10], i = 0, k, j, c = 0, n2;
	cin >> n;
	while(true) {
		i = 0;
		m = n;
		while(n > 0){
		    p[i++] = n % 10;
		    n /= 10;
	    }
	    k = i;
	    //buurah
	    sort(p, p+k);
	    reverse(p, p+k);  //3210		
	    
	    int big = 0, small = 0;
	    for(i = 0; i < k; i++){
		    small =  small * 10 + p[k-(i + 1)]; 
		    big = big * 10 + p[i];
	    }
	    n2 = big - small;
	    c++;
	    if(m == n2)
		   break;   
	    m = n = n2;
	}
	cout << c;
}

/*
495
1. 954 - 459 = 495; 

*/


