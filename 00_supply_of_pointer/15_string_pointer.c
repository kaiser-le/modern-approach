#include <stdio.h>

int main(void)
{
	char str[6] = "hello";

	for (int i = 0; str[i]; i++)
		printf("&str[%d] = %p\tstr[%d] = %c\n", i, (void *)(str + i), i,
		       *(str + i));

	return 0;
}