#include <stdio.h>
typedef long long int int64_t;

int main(int argc, char const *argv[])
{
	int64_t n, k;
	scanf("%lld %lld", &n, &k);
	if (n&1) n++;
	printf("%lld\n", (2*k <= n) ? (2*k-1) : (2*k-n));
	return 0;
}