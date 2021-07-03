#include <stdio.h>

int max(int a, int b) {
	return a > b ? a : b;
}

int main(int argc, char const *argv[])
{
	int n, i = 1, cur, prev, maxCount = 0, count = 1;
	scanf("%d", &n);
	scanf("%d", &prev);
	while (i < n) {
		scanf("%d", &cur);
		if (cur < prev) {
			maxCount = max(count, maxCount);
			count = 1;
		} else {
			count++;
		}
		prev = cur;
		i++;
	}
	maxCount = max(count, maxCount);
	printf("%d\n", maxCount);
	return 0;
}