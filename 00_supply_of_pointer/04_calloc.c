// the difference of calloc and malloc:
//  calloc() will init the allocated memory
#include <stdio.h>
#include <stdlib.h> //for calloc

int main(void)
{
	int *ptr = (int *)calloc(5, sizeof(int));
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
}