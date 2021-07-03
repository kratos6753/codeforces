#include <stdio.h>

int main(int argc, char const *argv[])
{
	char a[101], b[101];
	scanf("%s", a);
	scanf("%s", b);
	char *ap = &a[0], *bp = &b[0];
	while (*ap != '\0') {
		printf("%c", (*ap == *bp) ? '0' : '1');
		ap++, bp++;
	}
	printf("\n");
	return 0;
}