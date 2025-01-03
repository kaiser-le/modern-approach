/* test whether a number is prime */
#include <stdio.h>
#include <stdbool.h>

bool is_prime(int test_number)
{
	int divisor;

	if (test_number <= 1)
		return false;

	for (divisor = 2; divisor * divisor <= test_number; divisor++) {
		if (test_number % divisor == 0)
			return false;
	}

	return true;
}

int main(void)
{
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);
	if (is_prime(n))
		printf("Prime\n");
	else
		printf("Not prime\n");

	return 0;
}