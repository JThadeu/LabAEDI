#include <stdio.h>
#include <stdlib.h>
int primo(int n){
	int i, aux=0;
	for(i = 1; i <= n; i++){
	   if(n%i==0){
	   	aux++;
	   }
	   if(aux == 2){
	   	return(1);
	   }else{
	   	return(0);
	   }
	   
	}	
	
}

int main(){

	int i;
	for(i = 1; i <= 100; i++){
	   if(primo(i)==1){
	   	printf("%d", i);
	   }
	   
	}
	
	
    return 0;
}
