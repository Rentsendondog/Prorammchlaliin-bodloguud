#include <bits/stdc++.h>

using namespace std;

main() {
	long long t, w, b, g, r, q, p, x;
	cin >> t >> w >> b;
	g = __gcd(w, b);
	q = (t + 1) / w / (b / g);
	r = (t + 1) - q * w * (b / g);
	x = min(w, b);
	p = x * q + min(x, r) - 1;
	g = __gcd(p, t);
	cout << p / g << "/" << t / g;
}
