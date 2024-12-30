// Realloc limitation:
// if the memory area is not created dynamically using malloc or calloc,
// then the behavior of the realloc function is undefined.
#include <stdio.h>
#include <stdlib.h> //for realloc

// the address depend on the new size and actual size, to expand, free or move;
int main(void)
{
	char *ptr = (char *)malloc(200 * sizeof(char));
	printf("address = %p\n", ptr);

	ptr = (char *)realloc(ptr, 100 * sizeof(char));
	printf("address = %p\n", ptr);

	ptr = (char *)realloc(ptr, 400 * sizeof(char));
	printf("address = %p\n", ptr);

	return 0;
}