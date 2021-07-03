#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, p, q, result = 0;
	scanf("%d", &n);
	while(n--) {
		scanf("%d %d", &p, &q);
		if (q-p >= 2) result++;
	}
	printf("%d\n", result);
	return 0;
}