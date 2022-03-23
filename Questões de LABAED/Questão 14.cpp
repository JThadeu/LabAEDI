#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

double hipot(double cat1, double cat2){	
	sqrt(pow(cat1,2)+pow(cat2,2));
}

int main(){
	string resposta = "";
	int cat1, cat2;
	printf("Digite os catetos 1 e 2: ");
	scanf("%d%d", &cat1, &cat2);
	cout << hipot(cat1, cat2);

	
	
}
