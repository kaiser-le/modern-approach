// arr[3][3], arr类型是(int*)[3]
#include <stdio.h>

int main(void)
{
	int arr[3][3] = { { 10, 20, 30 }, { 5, 6, 7 }, { 100, 80, 90 } };

	// &arr and &arr +1; type: (int *)[3][3]
	printf("pointer which point to 2d array = %p\n", (void *)&arr);
	printf("the next 2d array = %p\n", (void *)(&arr + 1));

	// arr, arr+1 and arr+2; type: (int *)[3]
	printf("2d array name point to the first \
element(in factal, 1d array, type:(int*)[3]) = %p\n",
	       (void *)arr);
	printf("the second element of 2d array = %p\n", (void *)(arr + 1));
	printf("the third element of 2d array = %p\n", (void *)(arr + 2));

	// *arr, *arr+1, *arr+2; type: (int *)
	printf("the first value address = %p\n", (void *)(*arr));
	printf("the second value address = %p\n", (void *)(*arr + 1));
	printf("the third value address = %p\n", (void *)(*arr + 2));

	// *(arr+1), *(arr+1)+1, *(arr+2)+2, *(arr+2), *(arr+2)+1, and *(arr+2)+2;
	printf("the fourth value address = %p\n", (void *)(*(arr + 1)));
	printf("the fiveth value address = %p\n", (void *)(*(arr + 1) + 1));
	printf("the sixth value address = %p\n", (void *)(*(arr + 1) + 2));
	printf("the seventh value address = %p\n", (void *)(*(arr + 2)));
	printf("the eighth value address = %p\n", (void *)(*(arr + 2) + 1));
	printf("the nineth value address = %p\n", (void *)(*(arr + 2) + 2));

	// actual value
	printf("1th = %d\n", **arr);
	printf("2th = %d\n", *(*arr + 1));
	printf("3th = %d\n", *(*arr + 2));
	printf("4th = %d\n", **(arr + 1));
	printf("5th = %d\n", *(*(arr + 1) + 1));
	printf("6th = %d\n", *(*(arr + 1) + 2));
	printf("7th = %d\n", **(arr + 2));
	printf("8th = %d\n", *(*(arr + 2) + 1));
	printf("9th = %d\n", *(*(arr + 2) + 2));

	return 0;
}