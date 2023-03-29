#include <iostream>
using namespace std;

main() {
    int t;
    cin >> t;
    if(t >= 3600)
       cout << t / 3600 << " " << (t / 60) % 60 << " " << t % 60 <<endl;
    else 
       cout << t / 3600 << " " << t / 60 << " " << t % 60 <<endl;
     
}
