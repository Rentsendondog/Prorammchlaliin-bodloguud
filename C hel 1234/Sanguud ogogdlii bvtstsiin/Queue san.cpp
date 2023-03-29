#include <stdio.h>
#include <queue>

using namespace std;

main() {
	queue <int> q1, q2;
	q1.push(1);
	q1.push(2);
	q2.push(3);
	q2.push(4);
	printf("Hemjee : %d\n",q1.size()); // hemjee
	printf("Elementuudiin soliogui uyd\n%d :    %d\n",q1.front(), q1.back());  // ehnii bolon svvliin element
	printf("%d :    %d\n\n",q2.front(), q2.back());
	swap(q1, q2);  // (bairiig ni solih) sanah oin  haygiig ni solij bga
	printf("\nElementuudiin solison uyd\n%d :    %d\n",q1.front(), q1.back());
	printf("%d :    %d",q2.front(), q2.back());
}

/*
   queue -- araas ni element hiigeed urdaas ni avdag (deerees ni hiigeed dooroos ni avdag)
*/
