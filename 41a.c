#include <stdio.h>
#include <string.h>

int isCorrectTranslation(char *message, char *translation) {
	int l = strlen(message);
	if (l != strlen(translation)) return 0;
	int i = 0;
	while (i < l) {
		if (message[i] != translation[l-i-1]) return 0;
		i++;
	}
	return 1;
}

int main(int argc, char const *argv[])
{
	char message[101], translation[101];
	scanf("%s", message);
	scanf("%s", translation);
	printf("%s\n", isCorrectTranslation(message, translation) ? "YES": "NO");
	return 0;
}