#include <iostream>
using namespace std;

int main() {
    long long n, r;
//    int a = 1, b, c, d, s, r;
    cin >> n;
    r = n % 100;
    (r % 4 == 0) ? cout << "0" : cout << "4";
//    r = n % 4;
//    switch(r)
//    {
//    	case 0:
//    		b = 6;
//			c = 1;
//			d = 6;
//			break;
//		case 1:
//			b = 2;
//			c = 3;
//			d = 4;
//			break;
//		case 2:
//			b = 4;
//			c = 9;
//			d = 6;
//			break;
//		case 3:
//			b = 8;
//			c = 7;
//			d = 4;
//			break;	   
//	}
//	s = a + b + c + d;
//	cout << s % 5;
}
