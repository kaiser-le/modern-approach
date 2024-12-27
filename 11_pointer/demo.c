#include <stdio.h>

int main(void)
{
	int a = 5;
	int *p = &a;

	printf("a's address: %p\n", p);
	printf("a's value: %d\n", *p);

	return 0;
}