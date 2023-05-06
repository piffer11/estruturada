#include <stdio.h>

main() {
	int anterior=1, atual=1, proximo, total=0;
	printf("%d\n", anterior);
	printf("%d\n", atual);
	while (total<=18) {
		proximo = anterior + atual;
		anterior = atual;
		atual = proximo;
		printf("%d\n", proximo);
		total++;
	}
}
