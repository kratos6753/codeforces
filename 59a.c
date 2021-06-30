#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isLower(char c) {
	return (c - 'a') < 26 && (c - 'a') >= 0;
}

int main(int argc, char const *argv[])
{
	char word[110], lower[110], upper[110];
	scanf("%s", word);
	int l = strlen(word), index = 0, lowerCount = 0;
	while (index < l) {
		if (isLower(word[index])) {
			lower[index] = word[index];
			upper[index] = 'A' + (int)(word[index] - 'a');
			lowerCount++;
		} else {
			lower[index] = 'a' + (int)(word[index] - 'A');
			upper[index] = word[index];
		}
		index++;
	}
	upper[l] = lower[l] = '\0';
	printf("%s\n", (2*lowerCount >= l) ? lower : upper);
	return 0;
}