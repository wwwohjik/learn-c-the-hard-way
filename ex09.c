#include <stdio.h>

int main(int argc, char*argv[])
{
	int i = 0;
	while (i < 25) {
		printf("%d ", i);
		i++;
	}
	printf("\n");

	int j =25;
	while (j >= 0) {
		printf("%d ", j);
		j--;
	}
	printf("\n");

	return 0;
}