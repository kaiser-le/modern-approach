/* format-string
	-include normal character, conversion specification and escape sequence. 
*/
#include <stdio.h>

int main(void)
{
	// compiler will not check pattern-match, just warning, not error
	/* int i = 3;
	int j = 4;
	printf("%d\n", i, j); */

	int i = 3;
	float x = 2.1f;
	printf("%.10d\n", i);
	printf("%.3e\n", x);
	printf("%f\n", x);
	printf("%g\n", x);
	printf("%.3g\n", x);

	return 0;
}