#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int invert(int n);
int main(){
	setlocale(LC_ALL, "");
	int numero;
	printf("Digite um n�mero: ");
	scanf("%i",&numero);
	invert(numero);

	return 0;
}
int invert(int n){
	if(n == 0){
		return 0;
	}
	else{
		printf("%i", n% 10);
		n = n/ 10;
     return invert(n);
	}
}