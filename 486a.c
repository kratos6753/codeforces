#include <stdio.h>
typedef long long int int64_t;

int main(int argc, char const *argv[])
{
	int64_t n;
	scanf("%lld", &n);
	printf("%lld\n", n&1 ? -((n>>1)+1) : (n>>1));
	return 0;
}