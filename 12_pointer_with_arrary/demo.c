//array name can be seen a pointer which point to the first element of array.
//but array name is not a pointer, it cannot be changed;

//for parameter, declare as array or pointer, is equal;
//but for variable, declare as array, mean a series memory is allocated.
//variable, declare as pointer, it just allocate for a pointer variable;
#include <stdio.h>

int main(void)
{
	// int arr[5] = { 2, 6, 8, 4, 1 };
	int *ptr = (int[]){ 2, 6, 8, 4, 1 }; //pointer to compound literas

	// ptr = &arr[0];
	printf("%d\n", *ptr++);
	printf("%d\n", *ptr);
	printf("%d\n", *(ptr + 3));

	int arr[5] = { 2, 6, 8, 4, 1 };
	int sum = 0;
	for (int *p = arr; p < arr + 5; p++)
		sum += *p;
	printf("sum of array: %d\n", sum);

	return 0;
}