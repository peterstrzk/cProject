#include <stdio.h>
int main() {
	char dupa[] = "siema eniu";

		int i;
		for (i = 0; i < (sizeof(dupa) / sizeof(dupa[0])); i++) {
			printf(dupa[i]);
		};
	return 0;
}
