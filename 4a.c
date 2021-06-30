#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);
	printf("%s\n", (n == 2 || ((n % 2) == 1)) ? "NO": "YES");
	return 0;
}