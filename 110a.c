#include <stdio.h>

typedef long long int int64_t;

int getLuckyDigits(int64_t n) {
	int count = 0;
	while (n) {
		if (n % 10 == 4 || n % 10 == 7) count++;
		n /= 10;
	}
	return count;
}

int isLucky(int64_t n) {
	if (n == 0) return 0;
	while (n) {
		if (n % 10 != 4 && n % 10 != 7) return 0;
		n /= 10;
	}
	return 1;
}

int isNearlyLucky(int64_t n) {
	int luckyDigits = getLuckyDigits(n);
	return isLucky(luckyDigits);
}

int main(int argc, char const *argv[])
{
	int64_t n;
	scanf("%lld", &n);
	printf("%s\n", isNearlyLucky(n) ? "YES": "NO");
	return 0;
}