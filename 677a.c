#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, h, t, result = 0;
	scanf("%d %d", &n, &h);
	while (n--) {
		scanf("%d", &t);
		if (t > h) result++;
		result++;
	}
	printf("%d\n", result);
	return 0;
}