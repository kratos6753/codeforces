#include <stdio.h>

int isPrint(char *program) {
	while(*program != '\0') {
		if (*program == 'H' || *program == 'Q' || *program == '9') return 1;
		program++;
	}
	return 0;
}

int main(int argc, char const *argv[])
{
	char program[101];
	scanf("%s", program);
	printf("%s\n", isPrint(program) ? "YES" : "NO");
	return 0;
}