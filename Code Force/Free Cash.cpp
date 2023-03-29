#include <iostream>
using namespace std;

int max(int x, int y);
int distinct(int a[], int b[], int size);
main() {
    int n, dis, i;
    cin >> n;
    int h[100001], m[100001];
    for(i = 1; i <= n; i++) 
	    cin >> h[i] >> m[i];
	    
	dis = distinct(h, m, n);
	cout << dis;	        		        
}


int distinct(int a[], int b[], int n1)
{
	int k, s = 0, i, j;
	for(i = 1; i < n1; i++)
	{
		k = 1;
		for(j = i + 1; j <= n1 && j != i; j++)
		{
			if(a[i] == a[j] && b[i] == b[j])
				k++;
		}
		s = max(s, k);
	}
	return s;
}


int max(int x, int y)
{
	if(x > y)
	   return x;
	return y;
}

