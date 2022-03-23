#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int n, s=0, squad=0, scub=0;
	scanf("%d", &n);
	int i;
	for(i=1; i<=n; i++){
		s=s+i;
		squad=squad+(pow(i,2));
		scub=scub+(pow(i,3));
	}
	printf("Soma simples: %d\nSoma dos quadrados: %d\nSoma dos cubos: %d\n", s, squad, scub);
	
	
}
