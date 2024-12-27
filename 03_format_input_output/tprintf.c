/* prints int and float values in various formats */
#include <stdio.h>

//conversion specification:%m.pX
//m - minimum filed width
//p - precision(based on X), maybe significant digits(X-e,f) or after '.' digits(X-g)
int main(void)
{
	int i = 40;
	float x = 839.21f;

	printf("|%d|%5d|%-5d|%5.3d\n", i, i, i, i);
	printf("|%10.3f|%10.3e|%-10g", x, x, x);

	return 0;
}