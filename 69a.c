#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a = 0, b = 0, c = 0, n;
	scanf("%d", &n);
	while(n--) {
		int x, y, z;
		scanf("%d %d %d", &x, &y, &z);
		a += x;
		b += y;
		c += z;
	}
	printf("%s\n", (a == b && b == c && c == 0) ? "YES" : "NO");
	return 0;
}