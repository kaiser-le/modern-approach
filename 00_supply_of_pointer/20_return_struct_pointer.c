#include <stdio.h>
#include <stdlib.h>

struct employee {
	char name[4];
	int age;
	float weight;
};

struct employee *get_details()
{
	struct employee *ptr =
		(struct employee *)malloc(sizeof(struct employee));

	printf("Enter Employee's Details\n");
	scanf("%s %d %f", ptr->name, &ptr->age, &ptr->weight);

	return ptr;
}

int main(void)
{
	struct employee *e = get_details();

	printf("age     = %d\n", e->age);
	printf("age     = %d\n", e->age);
	printf("weight  = %f\n", e->weight);

	free(e);
	e = NULL;

	return 0;
}