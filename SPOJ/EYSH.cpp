#include <bits/stdc++.h>
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<math.h>

using namespace std;

main() {
	long long i = 0, k, dvn[100], j, c[100];
    while(cin >> dvn[i] != -0)
	{
		c[i] = i + 1;
		if(dvn[i] == -1)
		  break;
		i++;
		
	}
	k = i;
	for(i = 0; i < k; i++)
	{
		for(j = i + 1; j < k; j++)
		{
			if(dvn[i] < dvn[j])
			{
				swap(dvn[i], dvn[j]);
				swap(c[i], c[j]);
			}
		}
	}
	for(i = 0; i < k; i++)
         cout << c[i] << endl;
}


