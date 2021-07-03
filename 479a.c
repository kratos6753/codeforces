#include <stdio.h>
#include <stdarg.h>

int max(int nargs, ...) {
	va_list valist;
	va_start(valist, nargs);
	int maxVal = 0, temp;
	while (nargs--) {
		temp = va_arg(valist, int);
		if (temp > maxVal) maxVal = temp;
	}
	va_end(valist);
	return maxVal;
}

int main(int argc, char const *argv[])
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", max(6, a+b+c, a*b*c, a+b*c, (a+b)*c, a*b+c, a*(b+c)));
	return 0;
}