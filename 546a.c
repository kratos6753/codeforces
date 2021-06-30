#include <stdio.h>

int main(int argc, char const *argv[])
{
	int k, n, w;
	scanf("%d %d %d", &k, &n, &w);
	int ans = ((w*(w+1)/2)*k)-n;
	if (ans < 0) ans = 0;
	printf("%d\n", ans);
	return 0;
}