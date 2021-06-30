#include <stdio.h>

int isLucky(int n) {
	if (n == 0) return 0;
	int digit;
	while (n) {
		digit = n%10;
		if (digit != 7 && digit != 4) return 0;
		n /= 10;
	}
	return 1;
}

int isAlmostLucky(int n) {
	if (isLucky(n)) return 1;
	int i = 2;
	while (i*i <= n) {
		if (n % i  == 0 && (isLucky(i) || isLucky(n/i))) {
			return 1;
		}
		i++;
	}
	return 0;
}

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);
	printf("%s\n", isAlmostLucky(n) ? "YES": "NO");
	return 0;
}