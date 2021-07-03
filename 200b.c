#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, i = 0, temp;
	double result = 0;
	scanf("%d", &n);
	while (i < n) {
		scanf("%d", &temp);
		result += temp;
		i++;
	}
	result /= n;
	printf("%lf\n", result);
	return 0;
}