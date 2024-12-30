// case 1: passing pointer to function;
#include <stdio.h>

void set_to_zero(int *a)
{
	*a = 0;
}

int *max(int *a, int *b)
{
	if (*a > *b)
		return a;
	else
		return b;
}

int main(void)
{
	int a = 10;
	printf("Before calling the function a = %d\n", a);

	set_to_zero(&a);
	printf("After calling the function a = %d\n", a);

	int b = 20;
	int *result = max(&a, &b);
	printf("The max of a and b = %d\n", *result);

	return 0;
}