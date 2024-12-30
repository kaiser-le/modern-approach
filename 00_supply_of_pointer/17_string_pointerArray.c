#include <stdio.h>

int main(void)
{
	char *subject[5] = { "Tamil", "English", "Maths", "Science",
			     "Social Science" };

	printf("subject size = %zu\n",
	       sizeof(subject)); // 5 pointer variable size

	for (int i = 0; i < 5; i++)
		printf("subject[%d] = %p\t*subject[%d] = %s\n", i, subject[i],
		       i, subject[i]);

	return 0;
}