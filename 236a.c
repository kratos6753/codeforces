#include <stdio.h>

int main(int argc, char const *argv[])
{
	char c;
	int alpha[26] = {0}, distCount = 0;
	scanf("%c", &c);
	while (c != '\n') {
		alpha[c-'a']++;
		if(alpha[c-'a'] == 1) distCount++;
		scanf("%c", &c);
	}
	printf("%s\n", ((distCount % 2) == 0) ? "CHAT WITH HER!": "IGNORE HIM!");
	return 0;
}