#include <stdio.h>

int isUpper(char c) {
	return c >= 'A' && c <= 'Z';
}

char *reverseCase(char *c) {
	char *p = c;
	while (*p != '\0') {
		*p += isUpper(*p) ? 32 : -32;
		p++;
	}
	return c;
}

int main(int argc, char const *argv[])
{
	char c[101], *cp = &c[1];
	scanf("%s", c);
	while (*cp != '\0' && isUpper(*cp)) cp++;
	printf("%s\n", (*cp=='\0') ? reverseCase(&c[0]): c);
	return 0;
}