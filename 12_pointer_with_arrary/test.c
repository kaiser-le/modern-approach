#include <stdio.h>

#define NUM_ROWS 4
#define NUM_COLUMNS 6

int main(void)
{
	int arr[NUM_ROWS][NUM_COLUMNS];
	for (int row = 0; row < NUM_ROWS; row++)
		for (int col = 0; col < NUM_COLUMNS; col++)
			arr[row][col] = 4 * row + 5 * col;
}