// array's name is equal to an address which point to the first element of array;
// 1. 站在编译器的角度讲，变量名、数组名都是一种符号，它们最终都要和数据绑定起来。
// 变量名用来指代一份数据，数组名用来指代一组数据（数据集合），它们都是有类型的，以便推断出所指代的数据的长度。运算符sizeof 就是根据符号的类型来计算长度的;
// 数组具有类型，一维数组类型举例int [6], 二维数组类型举例int [3][4];
// 2. 与普通变量名相比，数组名既有一般性也有特殊性：一般性表现在数组名也用来指代特定的内存块，也有类型和长度；
// 特殊性表现在数组名有时候会转换为一个指针，而不是它所指代的数据本身的值;
// 3. 数组名在什么时候会转换为指向数组第一个元素的指针呢：
// 除了初始化，sizeof和&运算外（表示整个数组本身），都会转换为指针，例如作为函数参数传递时，用作表达式时；
#include <stdio.h>

int main(void)
{
	int arr[5] = { 10, 20, 30, 40, 50 };

	//manipulating array using pointer
	*(arr + 3) = 100;
	int *ptr = arr;
	*(ptr + 4) = 200;

	for (int i = 0; i < 5; i++) {
		printf("&arr[%d] = %p\n", i, (void *)(arr + i));
		printf("arr[%d] = %d\n", i, *(arr + i));
	}

	return 0;
}