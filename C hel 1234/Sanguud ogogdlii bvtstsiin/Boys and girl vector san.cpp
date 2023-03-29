#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

main() {
	char a;
	int n, t, i;
	vector <char> v;
	scanf("%d%d",&n,&t);
	for(i = 0; i <= n; i++)
	{
		scanf("%c",&a);
		v.push_back(a);
	}
	while(t--)
	{
		for(i = 0; i < n; i++)
		{
			if(v.at(i) == 'B' && v.at(i+1) == 'G')
			{
				swap(v.at(i), v.at(i+1));
				i++;
			}
		}
	}
	for(i = 0; i <= n; i++)
	{
		printf("%c",v.at(i));
	}
}
