//variable-lengrh array
#include <stdio.h>

int sum_two_dimensional_array(int n, int m, int arr[n][m])
{
	int sum = 0;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			sum += arr[i][j];

	return sum;
}

int main(void)
{
	printf("Enter the line num and column num: ");
	int n, m;
	scanf("%d %d", &n, &m);
	int a[n][m];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			a[i][j] = i + j;

	int sum = sum_two_dimensional_array(n, m, a);
	printf("sum of arrary elements: %d\n", sum);

	return 0;
}