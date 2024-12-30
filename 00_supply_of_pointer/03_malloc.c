// dynamic memory allocation in heap: malloc, calloc
// static memory allocation in stack
#include <stdio.h>
#include <stdlib.h> //for malloc

int main(void)
{
	int *ptr = (int *)malloc(5 * sizeof(int));
	if (ptr == NULL) {
		printf("Memory created failed, exit!");
		return -1;
	}

	*ptr = 10;
	*(ptr + 1) = 20;
	*(ptr + 2) = 30;
	*(ptr + 3) = 40;
	*(ptr + 4) = 50;

	printf("allocate memory index-address = %p\n", (void *)ptr);

	return 0;
}