#include <stdio.h>

void write_char(char symbol, int offset, int tree, int invert) {
	
	if (!invert) {
		for (int i = 0; i < offset; i++) {
			printf(" ");
		}

		for (int i = 0; i < tree; i++) {
			printf("%c", symbol);
		}
	} else {
		for (int i = 0; i < offset; i++) {
			printf(" ");
		}

		for (int i = 0; i < tree; i++) {
			printf("%c", symbol);
		}	
	}				
}

int main() {

	int size = 20;
	int invert = 1;

	for (int i = 1; i <= size; i++) {
		if (!invert) {
			write_char('i', size - i, (i * 2) - 1, invert);
			printf("\n");
		} else {
			write_char('i', i - 1, (size * 2 + 1) - (i * 2), invert);
			printf("\n");
		}
	}

return 0;
}
