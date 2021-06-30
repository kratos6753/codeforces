#include <stdio.h>
#include <stdlib.h>

void printString(char * queue, int n) {
	int i = 0;
	while (i < n) printf("%c", queue[i++]);
	printf("\n");
}

int main(int argc, char const *argv[])
{
	int n, t, i = 0, it = 0;
	scanf("%d %d\n", &n, &t);
	char * queue = (char *)malloc(sizeof(char)*n);
	while (i < n) scanf("%c", &queue[i++]);
	it = 0;
	while (it < t) {
		i = 0;
		while (i < n-1) {
			if (queue[i] == 'B' && queue[i+1] == 'G') {
				queue[i] = 'G';
				queue[i+1] = 'B';
				i++;
			}
			i++;
		}
		it++;
	}
	printString(queue, n);
	return 0;
}