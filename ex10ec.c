#include <stdio.h>

// This program converts all uppercase letters to lowercase in multiple arguments

int main(int argc, char *argv[])
{
	if (argc < 2) {
		return 0;
	}

	int i = 1;
	for (i = 1; i < argc; i++) {
		int j = 0;

		for (j = 0; argv[i][j] != '\0'; j++) {
			 int ascii_dec = argv[i][j];

			 if (ascii_dec > 64 && ascii_dec <91) {
			 	ascii_dec += 32;
			 }

			 char ascii = ascii_dec;
			 printf("%c", ascii);
		}
		if (i != argc ){
			printf(" ");
		}
	}

	printf("\n");
	return 0;
}