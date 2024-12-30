// dangling pointer: point to memory where is not exited or deleted;
// case 1: holding address of out of scope variable;
// case 2: returning address of a local variable;
// case 3: deallocating dynamic memory using free;
#include <stdio.h>
#include <stdlib.h> //for malloc

// int *get()
// {
// 	int i = 100;
// 	return &i;
// }

int main(void)
{
	int *ptr;

	/* 	// case 1: holding address of variable which is out of scope;
	{
		int i = 10;
		ptr = &i;
	}

	ptr = NULL;
	printf("ptr is dangling pointer, stored address = %p\n", (void *)ptr); */

	/* 
    //case 2: returning address of a local variable;
	ptr = get();
	ptr = NULL;
	printf("ptr is dangling pointer, stored address = %p\n", (void *)ptr); 
*/

	//case 3: deallocating dynamic memory using free;
	ptr = (int *)malloc(2 * sizeof(int));
	free(ptr);
	ptr = NULL;
	printf("ptr is dangling pointer, stored address = %p\n", (void *)ptr);

	return 0;
}