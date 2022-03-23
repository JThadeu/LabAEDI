#include <stdio.h>

void vt(float p, int qvd){
	float t;
	t=p*qvd;
	printf("%.2f", t);
}

int main(){
	int np, qvd;
	float p, t;
	printf("Digite o numero do produto: ");
	scanf("%d", &np);
	printf("Digite a quantidade vendida: ");
	scanf("%d", &qvd);
	switch(np){
		case 1:
			p=3;
			vt(p, qvd);
			break;
		case 2:
			p=4;
			vt(p, qvd);
			break;
		case 3:
			p=2.80;
			vt(p, qvd);
			break;
		case 4:
			p=1.95;
			vt(p, qvd);
			break;
		case 5:
			p=5;
			vt(p, qvd);
			break;
		default:
		printf("Numero do produto invalido!");
	}
	
	
}
