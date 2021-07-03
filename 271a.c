#include <stdio.h>

int isNotDistinct(int n) {
	int hash[10] = {0};
	while(n) {
		if (hash[n%10] > 0) return 1;
		hash[n%10]++;
		n /= 10;
	}
	return 0;
}

int getBeautifulYear(int n) {
	n++;
	while(isNotDistinct(n)) n++;
	return n;
}

int main(int argc, char const *argv[])
{
	int year;
	scanf("%d", &year);
	printf("%d\n", getBeautifulYear(year));
	return 0;
}