#include <stdio.h>

int main(void)
{
	char str[6] = "hello";

	// array name as pointer which point to first element
	for (int i = 0; str[i]; i++)
		printf("%s\n", str + i);

	return 0;
}