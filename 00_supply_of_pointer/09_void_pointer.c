// void - general purpose pointer, cannot be dereference and arithmetic operation;
// reference(&): give a variable address to a pointer variable;
// derefernce(*): direct access to the variable value, not the variable adrress;
#include <stdio.h>

//error: argument type 'void' is incomplete;
int main(void)
{
	int i = 10;
	char c = 'a';
	void *ptr;

	ptr = &i;
	printf("value of i = %d\n", *(int *)ptr);

	ptr = &c;
	printf("value of c = %c\n", *(char *)ptr);

	return 0;
}