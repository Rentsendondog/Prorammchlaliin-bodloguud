#include <stdio.h>
#include <utility>

using namespace std;
int main() {
	pair <char[100], int> user;
	printf("Ner:  ");
	scanf("%s",&user.first);
//	puts("Ner:  ");
//	gets(user.first);

//	getchar();
	printf("Nas:  ");
	scanf("%d",&user.second);
	printf("\n----%s %d nastai.",user.first, user.second);
}
