// increasing a pointer
// decreasing a pointer
// pointer addition
// pointer subtraction
// both depend on the data type;
// substracting two pointers - 'pointer - pointer' which point to the same object;
// limitation: no multiplication, division. bitwise operation;
#include <stdio.h>

int main(void)
{
	double f1 = 1.34;
	double *ptr = &f1;

	printf("ptr = %p\n", (void *)ptr);

	ptr++;
	printf("ptr = %p\n", (void *)ptr);

	return 0;
}