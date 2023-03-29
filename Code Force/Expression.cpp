#include <iostream>
using namespace std;

main() {
    int a, b, c, s1, s2, s3, s4, s5, max;
    cin >> a >> b >> c;
    s1 = a + b + c;
    s2 = (a + b) * c;
    s3 = a * b + c;
    s4 = a * (b + c);
    s5 = a * b * c;
    max = s1;
    if(max < s2) 
       max = s2;
    if(max < s3) 
       max = s3;
    if(max < s4) 
       max = s4;
	if(max < s5) 
       max = s5; 
    cout << max << endl;
       
}
