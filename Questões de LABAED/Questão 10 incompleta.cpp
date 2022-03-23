#include <stdlib.h>
#include <stdio.h>

int main(void){
	int i;
	double pi, aux=1;
		for(i=1;i<=10;i++){
			if(i%2==0){
			pi=pi-4/aux;
			}else{
			pi=pi+4/aux;
			aux=aux+2;
			}
		}
	printf("\n\n%.10lf\n\n", pi);
}
