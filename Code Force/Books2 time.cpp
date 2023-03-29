#include <iostream>
using namespace std;

int add(int A[], int d, int m);

int main() {
    int n, t, i, k = 0;
    cin >> n >> t;
    int a[n];
    for(i = 0; i < n; i++)
        cin >> a[i];
        
    for(i = 0; i < n; i++)
    {
    	if(t >= a[i])
    	{
    		k++;
    		t = t - a[i];
		}
	}
	cout << k;
        
}
