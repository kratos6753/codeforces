#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int n, p, q, i = 0, temp;
	scanf("%d", &n);
	scanf("%d", &p);
	int *hashMap = (int *)calloc(n, sizeof(int));
	while(p--) {
		scanf("%d", &temp);
		hashMap[temp-1]++;
	}
	scanf("%d", &q);
	while(q--) {
		scanf("%d", &temp);
		hashMap[temp-1]++;
	}
	while (n--) {
		if (hashMap[n] == 0) {
			printf("Oh, my keyboard!\n");
			return 0;
		}
	}
	printf("I become the guy.\n");
	return 0;
}