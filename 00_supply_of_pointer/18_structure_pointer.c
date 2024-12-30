#include <stdio.h>

struct employee {
	char name[4];
	int age;
	float weight;
};

int main(void)
{
	struct employee e = { "abc", 20, 55.5f };
	struct employee *ptr = &e;

	printf("name    = %s\n", ptr->name);
	printf("name    = %s\n", (*ptr).name);
	printf("age     = %d\n", (*ptr).age);
	printf("weight  = %f\n", (*ptr).weight);

	return 0;
}