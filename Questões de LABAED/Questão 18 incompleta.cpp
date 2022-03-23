#include <stdio.h>
#include <stdlib.h>

int isPerfect( int n )
{
    int r = 0;
    int soma = 0;
    int i = 0;

    for( i = 1; i <= (n - 1); i++ )
    {
        r = n % i;

        if(r == 0)
            soma += i;
    }

    if( soma == n )
        return 1;

    return 0;
}

int idv(int a){
	int i;
	printf("%d = ", a);
	for(i=0; i<a; i++){
		if(a%i==0){
			printf("%d, ", i);
		}
	}
	printf("\n");
}

int main( ){

	int i;
       
	for(i=0; i<1000; i++){
	
	    if( isPerfect(i) ){
	        printf("\n", idv(i));
		}
	
	}
    
    

    return 0;
}
