#include <iostream>

using namespace std;

main() {
	int n, s[100001], a = 0, i = 0, sum = 0;
	cin >> n;
	while(i < n)
		cin >> s[i++];
		
	while(i > a)
       sum > 0 ? sum -= s[--i] : sum += s[a++];  // Bob iduul hasaj bna, Alice iduul nemj bna
    cout << a << " " << n - a;
}

/*
   sum = 0, a = 0, i = 5;
   1.   (0 > 0) == 0 ---> sum = 0 + 2 = 2  (a = 1) 
   2.   (2 > 0) == 1 ---> sum = 2 - 7 = -5  (i = 4)
   3.   (-5 > 0) == 0 ---> sum = -5 + 9 = 4  (a = 2)
   4.   (4 > 0) == 1 ---> sum = 4 - 2  = 2  (i = 3)
   5.   (2 > 0) == 1 ---> sum = 2 - 8 = -6 (i = 2)
   i == a (2 == 2) tul davtaltaas garna;
*/
