#include <stdio.h>
#include <stdlib.h>

int main(){
	int fat=1, nf;
	int i, j;
	printf("Digite a quantidade de fatoriais a serem avaliados de 1 a N:\n");
	scanf("%d", &nf);
	for(i=1; i<=nf; i++){
		printf("%d! = ", i);
		for(j=1; j<=i; j++){
			fat=fat*j;
			printf("\t%d", fat);
		}
		printf("\n");
		fat=1;
	}
	
}
