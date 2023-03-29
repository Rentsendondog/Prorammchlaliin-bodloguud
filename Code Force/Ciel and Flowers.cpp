#include <iostream>

using namespace std;

main() {
	int r, g, b, too, too2, too3;
	cin >> r >> g >> b;
	too = min(r, min(g, b));
    r -= too;
    g -= too;
    b -= too;
    if((r % 3 + g % 3 + b % 3) == 4 && too != 0) // 2 toonii 3-t huvaasan uldegdeliin niilber 2 + 2 = 4 hamgiin ihdee oos hetrehgui
       too++;
	cout << too + r/3 + g/3 + b/3;
}
