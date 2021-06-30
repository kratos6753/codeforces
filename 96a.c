#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
	char c;
	int count = 1;
	bool isDangerous = false;
	scanf("%c", &c);
	while(!isDangerous && c != '\n') {
		char prev = c;
		scanf("%c", &c);
		if (prev == c) count++;
		else count = 1;
		if (count >= 7) { printf("YES\n"); isDangerous = true; }
	}
	if(!isDangerous) printf("NO\n");
	return 0;
}