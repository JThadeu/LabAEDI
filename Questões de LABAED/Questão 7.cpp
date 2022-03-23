#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	int *pn=&n;
	int i, j;
	int v[n];
	for(i=0; i<5; i++){
		scanf("%d", &v[i]);
	}
	for(i=0; i<5; i++){
		for(j=0; j<*(v+i); j++){
			printf("*");

		}
		printf("\n");
	}
	
}
