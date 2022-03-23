#include <stdio.h>

int main(){
	char ch;
	int i, count=0;
	for(i=0; i<=127; i++){
		ch=i;
		if(count<9){
			count++;
		}else{
			printf("\n");
			count=0;
		}
		printf("%c", ch);
	}

}
