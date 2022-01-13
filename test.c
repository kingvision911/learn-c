#include <stdio.h>

int main() {
	char c; 
	int nc = 0;

	while ((c = getchar()) != EOF) {
		nc++;		
	}

	printf("%d", nc);
}
