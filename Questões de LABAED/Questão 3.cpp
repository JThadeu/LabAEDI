#include <stdio.h>
#include <stdlib.h>

int main(){
	int soma=0;
	int i;
	for(i = 1; i <= 100; i++){
	   if(i%7==0){
	   	printf("%d\n", i);
	   	soma = soma + i;
	   }
	}
	printf("%d\n", soma);
    return 0;
}
