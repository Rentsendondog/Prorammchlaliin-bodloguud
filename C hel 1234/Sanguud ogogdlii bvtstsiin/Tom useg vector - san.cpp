#include <stdio.h>
#include <string.h>
#include <vector>

using namespace std;

main() {
	char s[100];
	int i;
	scanf("%s",&s);
//	gets(s);
	vector <int> a;
	vector <char> c;
	for(i = 0; i < strlen(s); i++)
		if(s[i] >= 65 && s[i] <= 90)
		{
			a.push_back(i);   // tom useg bga index buyu bairlaliin vectorluu hiij bna
			c.push_back(s[i]);
		}
			        

	for(i = 0; i < a.size(); i++)
	    s[a.at(i)] += 32;          // a.at(i) Tom useg oldson bairal
	   printf("%s\n", s);
	   
	for(i = 0; i < c.size(); i++)
	    printf("%c ", c.at(i));
}
