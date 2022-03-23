#include <stdio.h>

int main(){
	
	float c=30, f, t;
	
	int i;
	printf("\n\tCelsius   e    Fahrenheit\n");
	for(i=0; i<=20; i++){
		f = c * 1.8 + 32;
		printf("\t%.2f\t = \t%.2f\n", c, f);
		c=c+1;	
	}	
		
	}
