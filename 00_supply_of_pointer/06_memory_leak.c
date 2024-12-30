#include <stdio.h>
#include <stdlib.h>

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

	free(ptr);
	//free() just labels the memory heap which can be reused,
	//the pointer actually point to the old address;
	//to avoid "dangling pointer" and "double free";
	//free(NULL) is safe;
	ptr = NULL;
	// printf("allocate memory index-address = %p\n", (void *)ptr);
	// free(ptr);

	return 0;
}