#include <stdio.h>
#include <math.h>
#include <complex.h>

#define local_sin(x)                   \
	_Generic((x),                  \
		float: sinf,           \
		double: sin,           \
		long double: sinl,     \
		float _Complex: csinf, \
		double _Complex: csin, \
		long double _Complex: csinl)((x))

int main(void)
{
	printf("%d\n", local_sin(.5f));

	double _Complex d = local_sin(.3 + .5 * I);
	printf("%.2f + %.2f*I\n", creal(d), cimag(d));

	return 0;
}