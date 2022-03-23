#include <stdio.h>
#include <iostream> 

using namespace std;
int mat(int l1, int l2){
	int i, j;
	int m[l1][l2];
	for(i=1; i<=l1; i++){
		for(j=1; j<=l2; j++){
			cout << "*";
		}
		cout<<"\n";
	}
}

int main(){
	string resposta = "";
	int l1, l2;
	cout << "digite os lados 1 e 2:";
	scanf("%d %d", &l1, &l2);
	mat(l1,l2);
	
}
