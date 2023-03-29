#include <iostream>
using namespace std;

main() {
    int a, b, a2, b2;
    cin >> a >> b;
    a2 = a;
    b2 = b;
    while(a != b){
        if(a > b)
           a = a - b;
        else 
           b = b - a;
	}
	cout << a2 * b2 / b;
}
