#include <stdio.h>

int main(void) {
	printf("|%-8.1f|\n", 8080.1);
	printf("|%10.6e|\n", 8080.1);
	printf("|%-8.3f|\n", 8080.1);
	printf("|%6.0f|\n", 8080.1);
	return 0;
}
