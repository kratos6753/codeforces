#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, x = 0;
	scanf("%d", &n);
	while(n--) {
		char a, b, c;
		scanf("\n%c%c%c", &a, &b, &c);
		if (a == '+') x++;
		else if (a == '-') x--;
		else if (b == '+') x++;
		else x--;
	}
	printf("%d\n", x);
	return 0;
}