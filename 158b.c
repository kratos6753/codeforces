#include <stdio.h>
#include <math.h>

int max(int a, int b) {
	return a > b ? a : b;
}

int main(int argc, char const *argv[])
{
	int n, c[4] = {0}, i = 0, temp;
	scanf("%d", &n);
	while (i < n) {
		scanf("%d", &temp);
		c[temp-1]++;
		i++;
	}
	temp = c[3]+c[2];
	if (c[0] < c[2]) {
		temp += (c[1]+1)>>1;
	} else {
		temp += (int)ceil(max(0, c[0]-c[2]-2*(c[1]&1))/4.0) + (c[1]>>1) + (c[1]&1);
	}
	printf("%d\n", temp);
	return 0;
}