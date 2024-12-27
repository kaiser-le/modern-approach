#include <stdio.h>
#include <stdlib.h> //for exit()
#include <stdbool.h>

#define STACK_SIZE 100

//external variable
int contents[STACK_SIZE];
int top = 0;

void make_empty(void)
{
	top = 0;
}

bool is_empty(void)
{
	return top == 0;
}

bool is_full(void)
{
	return top == STACK_SIZE;
}

void stack_overflow(void)
{
	printf("stack overflow, exit.\n");
	exit(EXIT_FAILURE);
}

void push_stack(int i)
{
	if (is_full())
		stack_overflow();
	else
		contents[top++] = i;
}

int pop_stack(void)
{
	if (is_empty())
		stack_overflow();

	return contents[--top];
}

int main(void)
{
	make_empty();
	int a[5][5];
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			a[i][j] = 2 * i + 3 * j;

	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
		push_stack(*(&a[0][0] + i));

	printf("push stack data:");
	for (int i = 0; i < top; i++)
		printf(" %d", contents[i]);
	printf("\n");

	printf("top locate at %d\n", top);

	int b[25];
	// for (int i = 0; i < 25; i++)
	// 	b[i] = pop_stack();
	int index = 0;
	while (!is_empty()) {
		b[index] = pop_stack();
		index++;
	}

	printf("pop stack data:");
	for (int i = 0; i < 25; i++)
		printf(" %d", b[i]);
	printf("\n");

	return 0;
}