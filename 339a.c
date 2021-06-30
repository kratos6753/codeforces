#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
	int ai = *(const int *)a;
	int bi = *(const int *)b;
	return ai-bi;
}

int main(int argc, char const *argv[])
{
	char c;
	scanf("%c", &c);
	int nums[100], n = 0;
	while(c != '\n') {
		if (c != '+') nums[n++] = c - '0';
		scanf("%c", &c);
	}
	qsort(nums, n, sizeof(nums[0]), cmp);
	int index = 0;
	while (index < n-1) {
		printf("%d+", nums[index++]);
	}
	printf("%d\n", nums[index]);
	return 0;
}