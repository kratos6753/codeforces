#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	double a, b;
	scanf("%lf %lf", &a, &b);
	double c = b/a;
	double ans = log(c)/log(1.5);
	printf("%d\n", (int)floor(ans)+1);
	return 0;
}