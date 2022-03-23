#include <stdio.h>
#include <stdlib.h>

int main() {
	int x;
	int sequencia[x];
	int i;
	float soma = 0;
	printf("Digite o numero de valores que serao inseridos:\n");
	scanf("%d", &x);
	for (i = 0; i < x; i++){
		printf("Digite o valor da posicao %d: ", i+1);
		scanf("%d", &sequencia[i]);
		soma = soma + sequencia[i];
	}
	printf("\nO valor da media eh: %.2f\n", (float)soma/(float)x);

	return 0;
}

