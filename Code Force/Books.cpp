#include <iostream>
using namespace std;

int add(int A[], int d, int m);

int main() {
    int n, i, n2, t, j, s, max, p = 0;
    cin >> n >> t;
    int a[n];
    for(i = 0; i < n; i++)
        cin >> a[i];
    
	n2 = n;
	max = 0;    
    for(i = 0; i < n; i++)
    {
    	for(j = n2; j >= i; j--)
    	{
    		s = add(a, i, j);
    		if(t >= s)
    		   p = j - i;
    		if(max < p)
    		   max = p;
		}
	}
	cout << max << endl;				        		        
}

int add(int A[], int d, int m)
{
	int i, sum = 0;
	for(i = d; i < m; i++)
	    sum = sum + A[i];
	    
	return sum;
}
