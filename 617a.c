#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	double x;
	scanf("%lf", &x);
	printf("%d\n", (int)ceil(x/5));
	return 0;
}