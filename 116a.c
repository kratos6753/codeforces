#include <stdio.h>

int max(int a, int b) {
	return a > b ? a : b;
}

int main(int argc, char const *argv[])
{
	int n, a, b, capacity = 0, maxCapacity = 0;
	scanf("%d", &n);
	while(n--) {
		scanf("%d %d", &a, &b);
		capacity += (b-a);
		maxCapacity = max(capacity, maxCapacity);
	}
	printf("%d\n", maxCapacity);
	return 0;
}