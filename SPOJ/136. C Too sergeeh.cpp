#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// Temdegtiin tsuvaa too hoyr ih uyd
//int number(char c)
//{
//	int ascii, number;
//	for(ascii = 48; ascii <= 57; ascii++)
//	{
//		if(c == ascii)
//		{
//			number = ascii - 48;
//			break;
//		}
//	}
//	return number;
//}

int main() {
	char s[100];
	int i, n, b[100], k = 100, sum = 0, j = 0;
	gets(s);
	for(i = 0; i < 100; i++)
	{
		if(s[i] >= 48 && s[i] <= 57)
		{
//			b[j] = number(s[i]);
			b[j] = (int)s[i] - 48;
			b[j] = b[j] * k;
			k /= 10;
			sum = sum + b[j++];
		}
	}
	printf("sum: %d",sum * sum);
}
