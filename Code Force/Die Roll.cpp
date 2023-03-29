#include <iostream>
using namespace std;

main() {
    int x, y, a;
    cin >> x >> y;
    if(x > y)
        a = x;
    else
        a = y;
    switch(a){
	
        case 1:
            cout << "1/1";
            break;
        case 2:
            cout << "5/6";
            break;
        case 3:
            cout << "2/3";
            break;
        case 4:
            cout<< "1/2";
            break;
        case 5:
            cout<< "1/3";
            break;
        case 6:
            cout << "1/6";
            break;
        default:
        	cout << "0/0";
    } 
}
