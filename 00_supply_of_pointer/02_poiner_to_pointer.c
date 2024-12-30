// double pointer
#include <stdio.h>

int main(void)
{
	int a = 10;
	int *ptr = &a;
	//this decarlation is false
	// int *pptr = &ptr;
	int **pptr = &ptr;

	printf("Address of a = %p\n", (void *)&a);
	printf("ptr points to the address = %p\n", (void *)ptr);
	printf("ptr address = %p\n", (void *)&ptr);
	printf("pptr points to the address = %p\n", (void *)pptr);

	printf("value of a = %d\n", a);
	printf("value ptr pointed = %d\n", *ptr);
	printf("value pptr double pointed = %d\n", **pptr);

	return 0;
}