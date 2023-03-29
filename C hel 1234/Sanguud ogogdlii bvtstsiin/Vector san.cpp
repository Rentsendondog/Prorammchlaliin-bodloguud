#include <stdio.h>
#include <vector>

using namespace std;

main() {
	int i, n, s;
	vector <int> a;  // duriin hvssen hemjeegeeree oruulna , agshij sunah chadvartai
	
	do{
		scanf("%d",&s);
		a.push_back(s); // araas ni nemne;
	}while(s != 0);
	a.pop_back();  // Hamgiin suuliin elmentiig hasah
	a.push_back(5);
	n = a.size();
	for(i = 0; i < n; i++)
	   printf("%d ", a.at(i));  // a.at(i)  a vectoriin i elment ruu handah function
	printf("Hemjee : %d ",n);
	
}
