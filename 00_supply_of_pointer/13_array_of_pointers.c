// 指向整个数组的指针 和 指针类型的数组
#include <stdio.h>

// #define pointer_to_whole_array

#ifdef pointer_to_whole_array

int main(void)
{
	int arr[5] = { 10, 20, 30, 40, 50 };

	//point to the whole array;
	int(*ptr)[5] = &arr;
	printf("ptr stored the whole array address = %p\n", (void *)ptr);
	printf("increasing ptr stored the whole array address = %p\n",
	       (void *)(++ptr));
	ptr--;
	printf("the first element's address of array = %p\n", (void *)(*ptr));
	printf("the third element's address of array = %p\n",
	       (void *)(*ptr + 2));
	printf("the last element's address of array = %p\n",
	       (void *)(*ptr + 4));

	printf("the value of first element = %d\n", **ptr);
	printf("the value of second element = %d\n", *(*ptr + 1));
	printf("the value of last element = %d\n", *(*ptr + 4));

	return 0;
}

#else
// array which type is pointer
int main(void)
{
	int *arr[5];
	int a = 10, b = 20, c = 30, d = 40, e = 50;

	arr[0] = &a;
	arr[1] = &b;
	arr[2] = &c;
	arr[3] = &d;
	arr[4] = &e;

	for (int i = 0; i < 5; i++)
		printf("arr[%d] = %p\t *arr[%d] = %d\n", i, (void *)arr[i], i,
		       *arr[i]);

	return 0;
}

#endif