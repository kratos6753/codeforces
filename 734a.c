#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, i = 0, anton = 0;
	char c;
	scanf("%d\n", &n);
	while(i < n) {
		scanf("%c", &c);
		if (c == 'A') anton++;
		i++;
	}
	if (2*anton == n) printf("Friendship\n");
	else if (2*anton < n) printf("Danik\n");
	else printf("Anton\n");
	return 0;
}