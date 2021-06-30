#include <stdio.h>
#include <string.h>

int isSubsequence(char message[], char hello[], int m, int n) {
	if (n == 0) return 1;
	if (m == 0) return 0;
	if (message[m-1] == hello[n-1]) return isSubsequence(message, hello, m-1, n-1);
	return isSubsequence(message, hello, m-1, n);
}

int main(int argc, char const *argv[])
{
	char hello[] = "hello";
	char message[101];
	scanf("%s", message);
	int l = strlen(message);
	printf("%s\n", isSubsequence(message, hello, l, 5) ? "YES": "NO");
	return 0;
}