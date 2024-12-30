//supply the whole pointer contents
#include <stdio.h>

int main(void)
{
	int a = 10;
	int *ptr = &a;

	printf("Value of a = %d\n", a);
	printf("Value ptr pointed = %d\n", *ptr);
	printf("Address of a = %p\n", (void *)&a);
	printf("ptr stored the value, in fact, an address of it point = %p\n",
	       ptr);
	printf("Address of ptr = %p\n", (void *)&ptr);

	return 0;
}