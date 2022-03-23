#include <stdio.h>
#include <iostream> 

char a;

using namespace std;
int mat(int l1, int l2){
	int i, j;
	int m[l1][l2];
	for(i=1; i<=l1; i++){
		for(j=1; j<=l2; j++){
			cout << a;
		}
		cout<<"\n";
	}
}

int main(){
	string resposta = "";
	int l1, l2;
	cout << "digite os lados 1 e 2: ";
	scanf("%d %d", &l1, &l2);
	cout<<"Digite o caractere que deseja imprimir: ";
	scanf("%s", &a);
	mat(l1,l2);
	
}
