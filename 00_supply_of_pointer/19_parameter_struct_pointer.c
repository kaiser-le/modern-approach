#include <stdio.h>

struct employee {
	char name[4];
	int age;
	float weight;
};

void func(struct employee *obj)
{
	printf("name    = %s\n", obj->name);
	printf("age     = %d\n", obj->age);
	printf("weight  = %f\n", obj->weight);

	obj->age = 30;
}

int main(void)
{
	struct employee e = { "abc", 20, 55.5f };
	struct employee *ptr = &e;

	func(ptr);
	printf("age     = %d\n", ptr->age);

	return 0;
}