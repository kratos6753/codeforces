#include <stdio.h>
#include <stdlib.h>

int cmp(const void *ap , const void *bp) {
	int a = *(int *)ap;
	int b = *(int *)bp;
	return b - a;
}

int main(int argc, char const *argv[])
{
	int n, i = 0, sum = 0, leftSum = 0;
	scanf("%d", &n);
	int *a = (int *)malloc(sizeof(int)*n);
	while (i < n) {
		scanf("%d", &a[i]);
		sum += a[i++];
	}
	qsort(a, n, sizeof(int), cmp);
	i = 0;
	while (leftSum <= sum) {
		leftSum += a[i];
		sum -= a[i];
		i++;
	}
	printf("%d\n", i);
	return 0;
}