#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, response;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &response);
		if (response) {
			printf("HARD\n");
			return 0;
		}
	}
	printf("EASY\n");
	return 0;
}