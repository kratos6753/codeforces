#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, i = 0;
	scanf("%d", &n);
	while (i < n) {
		if (i&1) printf("I love ");
		else printf("I hate ");
		i++;
		if (i != n) printf("that ");
	}
	printf("it\n");
	return 0;
}