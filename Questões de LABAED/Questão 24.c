#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int somatorio(int n);
int main(){
	setlocale(LC_ALL, "");
	int numero,s;
	
	printf("Digite um número: ");
	scanf("%i",&numero);
	s = somatorio(numero);
	printf("A soma é: %i\n",s);
	return 0;
}

int somatorio(int n){
	if(n == 0){
		return 0;
	}
	else{
		return n + somatorio(n - 1);
	}

}