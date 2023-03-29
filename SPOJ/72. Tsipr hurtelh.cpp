#include <iostream>
using namespace std;

main() {
    int n, i;
    cin >> n;
    for(i = 0; i < n; i++)
        if(i != n - 1)
           cout << i << " ";
        else 
           cout << i;
}
