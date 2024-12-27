//side effect: maybe change operands, not just compute values
//assignment '=' and compound assignment, increment-self and decrement-self
#include <stdio.h>

int main(void)
{
	int a = 5;
	int b;
	//sub-expression's order depend on compiler
	//such as function's argument for input;
	int c = (b = a + 2) - (a = 1);

	printf("%d, %d, %d\n", a, b, c);

	return 0;
}