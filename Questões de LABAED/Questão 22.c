#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int produto(int x1, int x2);

int main(){
	int x1, x2;
	printf("Digite os valores de x1 e x2: ");
	scanf("%i%i",&x1,&x2);
	
    printf("x1*x2 = %d\n", produto(x1, x2));
    return 0;
}
int produto(int x1, int x2){
    if(x1 == 0 || x2 == 0){
        return 0;
    }else if(x1 == 1){
        return x2;
    }else if(x2 == 1){
        return x1;
    }else{
        return produto(x1-1, x2) + x2;
    }
}