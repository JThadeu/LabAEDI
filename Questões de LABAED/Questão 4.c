#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void SeqPrimos(int n);
int contdivisores(int n);

int main(){
	setlocale(LC_ALL, "");
	printf("Os números primos de 1 a 100 são:\n");
	SeqPrimos(100);
	printf("\n\n");
	
	return 0;
}
void SeqPrimos(int n){
	int i;
	
	for(i = 1; i <= n;i++){
		if(contdivisores(i) == 2){
			printf("%i ",i);
		}
	}
}

int contdivisores(int n){
	int i, cont = 0;
	for(i = 1; i <= n; i++){
		if(n % i == 0){
			cont++;
		}
	}
	return cont;
}